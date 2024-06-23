//Code by RIR
#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;

vector<vi> nodos;
vi dis;
vs palabras;


bool iguales(string a, string b){
	int con = 0;
	if(a.size() != b.size()) return 0;
	for(int c = 0; c < a.size(); c++){
		if(a[c] != b[c]) con++;
		if(con > 1) return 0;
	}

	if (con == 0) return 0;

	return 1;
}

void creagrafo(int size){
	nodos.assign(size,vi());
	for(int a = 0; a < size; a++){
		for(int b = 0; b < size; b++){
			if(a == b) continue;
			if(iguales(palabras[a],palabras[b]))
                nodos[a].push_back(b);

		}
	}
}


int buscapos(string s){

	for(int a = 0; a < palabras.size(); a++)
		if(!palabras[a].compare(s)) return a;

	return 0;
}

int BFS(int ini, int des){
	queue<int> cola;

	dis.assign(palabras.size(),-11);
	dis[ini] = 0;
	cola.push(ini);
	while(!cola.empty()){
		int pos = cola.front();
		cola.pop();
		for(int a = 0; a < nodos[pos].size(); a++){
			int temp = nodos[pos][a];
			if(dis[temp] == -11){
				cola.push(temp);
				dis[temp] = dis[pos]+1;
				if(dis[des] != -11) return dis[des];
				//cout << "vecino de "<<palabras[pos]<<": "<<palabras[temp]<<" costo: "<<dis[temp]<<endl;
			}
		}

	}

    

	return -11;
}

int main(){

		char tems[25];
		while(scanf("%s",tems), tems[0] != '#') {
			palabras.push_back(string(tems));
        }


        getchar();
		creagrafo(palabras.size());
		while(scanf("%[^\n]s",tems) != EOF){
			string ini = string(tems).substr(0,string(tems).find(" ")), des = string(tems).substr(string(tems).find(" ")+1);
			cout << ini << " " << des << " " << BFS(buscapos(ini),buscapos(des)) <<endl;
            getchar();
		}


	return 0;
}
