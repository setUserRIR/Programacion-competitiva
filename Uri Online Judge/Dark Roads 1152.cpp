#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

struct trupa{int p,s,t;};

struct str{bool operator()(trupa a, trupa b){return a.t < b.t;}}strr;

vi nodos, podar, nodosTam;
int conjuntos;

void unionFind(int n){ //creo los vectores que almacenaran los datos
	nodosTam.assign(n,1); //guarda el tamaño de un nodo, si es un padre su tamaño sera el propio mas el de los hijos. vamos, que cuantas cosas tiene unidas
	nodos.resize(n);  //su nombre lo dice, el indice son los nodos y su valor el padre 
	podar.assign(n,0); //podar es un acercamiento a la longitud del arbol. !!NO USAR PARA ENTREGAR DATOS¡¡. su uso se limita a hacer el arbol lo mas pequeño posible
	conjuntos = n; //almacena la cantidad de conjuntos diferentes. al enlazar dos nodos se le resta porque estoy volviendo dos conjuntos uno solo
	for(int a = 0; a < n; a++) nodos[a] = a; //relleno el valor de los nodos con si mismo porque en un principio no tienen padres :'(
}

int find(int a){
	return (nodos[a] == a) ? a : (nodos[a] = find(nodos[a]));//pregunta si en nodo no tiene padres, si es no busca recursivamente al padre de este y repite.
}

bool sonFamilia(int a, int b){
	return find(a) == find(b); //pregunta si ambos nodos pertencen al mismo conjunto
}

void unir(int a, int b){ //el nombre lo dice
	int x = find(a), y = find(b); //x e y son el padre supremo de ambos elementos
	if(x != y){ //si resulta que ambos elementos tienen diferentes padres comienza la union
		conjuntos--; //disminuye los conjuntos en 1 porque hice que dos se unieran.. piensalo
		if(podar[x] > podar[y]){ //si el podar de x es mayor, y se unira a x y x aumenta la cantidad de nodos que tiene
			nodos[y] = x;
			nodosTam[x] += nodosTam[y];
		}else{
			nodos[x] = y; //si el podar de y es mas grande o igual
			nodosTam[y] += nodosTam[x];
			if(podar[x] == podar[y]) podar[y]++; // si llegaran a tener el mimso podar aumento el podar de y porque le uni antes el x, haciendolo crecer
		}
	}
}

int sizeconjunto(int a){   //da el tamaño total del conjunto al que pertenece el elemento
	return nodosTam[find(a)];
}

int main() {
	
	int n,m;
	while(scanf("%d %d",&n,&m),n||m){
		int total = 0;
		unionFind(n);
		vector<trupa> vt;
		for(int a = 0; a < m; a++){
			trupa tt;
			scanf("%d %d %d",&tt.p,&tt.s,&tt.t);
			vt.push_back(tt);
			total += tt.t;
		}
		sort(vt.begin(),vt.end(),strr);
		
		for(int a = 0; a < vt.size(); a++){
			if(conjuntos == 1) break; 
			if(sonFamilia(vt[a].p,vt[a].s)) continue;
			unir(vt[a].p,vt[a].s);
			total -= vt[a].t;
		}
		printf("%d\n",total);
	}
	
	
  return 0;
}
