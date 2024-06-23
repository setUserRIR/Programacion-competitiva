#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi nodos, podar, nodosTam, uniones,vis;
int conjuntos;

void unionFind(int n){ 
	nodosTam.assign(n,1); 
	nodos.resize(n);   
	podar.assign(n,0); 
	conjuntos = n; 
	uniones.assign(n,1);
	vis.assign(n,0);
	for(int a = 0; a < n; a++) nodos[a] = a; 
}

int find(int a){
	return (nodos[a] == a) ? a : (nodos[a] = find(nodos[a]));
}

bool sonFamilia(int a, int b){
	return find(a) == find(b); //pregunta si ambos nodos pertencen al mismo conjunto
}

void unir(int a, int b){ //el nombre lo dice
	int x = find(a), y = find(b); //x e y son el padre supremo de ambos elementos
	if(x != y){ 
		conjuntos--; 
		if(podar[x] > podar[y]){ 
			nodos[y] = x;
			nodosTam[x] += nodosTam[y];
			uniones[x] += uniones[y];
			vis[y] = 1;
		}else{
			nodos[x] = y; 
			nodosTam[y] += nodosTam[x];
			if(podar[x] == podar[y]) podar[y]++; 
			uniones[y] += uniones[x];
			vis[x] = 1;
		}
	}
}

int sizeconjunto(int a){   
	return nodosTam[find(a)];
}

int main() {
  	int n,m;
  	scanf("%d %d", &n, &m);
  	
  	unionFind(n);
  	
  	vi caminos;
  	map<int, int> mp;
  	
  	for(int a = 0; a < m; a++){
  		int u,v;
  		scanf("%d %d",&u,&v);
  		caminos.push_back(u);
  		unir(u,v);
	}
	
	
	int suma = 0;
	
	
	for(int a = 0; a < m; a++){
		mp[find(caminos[a])]++;
	}
	
	for(auto x = mp.begin(); x != mp.end(); x++){
		int tem = sizeconjunto(x->first);
		suma += tem*(tem-1)/2 - x->second;
	}
	
	
	
	/*for(int a = 0; a < n; a++){
		if(!vis[a]){
			int tem = sizeconjunto(a);
			//printf("estado %d tam %d: %d\n",a,tem,tem*(tem-1)/2 -(uniones[find(a)]-1));
			suma += tem*(tem-1)/2 -(uniones[find(a)]-1);
		}
	}*/
	
	printf("%d\n",suma);
  	
  return 0;
}
