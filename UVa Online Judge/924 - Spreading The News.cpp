//Code by RIR
#include<bits/stdc++.h>

using namespace std;

#define INF 1e9+7

typedef vector<int> vi;

vector<vi> grafo;
vi lista;

void BFS(int ini){
	queue<int> cola;
	lista[ini] = 0;
	cola.push(ini);
	
	while(!cola.empty()){
		int pos = cola.front();
		cola.pop();
		for(int a = 0; a < grafo[pos].size(); a++){
			int tem = grafo[pos][a];
			if(lista[tem] == -11){
				cola.push(tem);
				lista[tem] = lista[pos] + 1;
			}
		}
	}
}

void printgrafo(){
	for(int a = 0; a < grafo.size(); a++){
		printf("grafo %d: ",a);
		for(int b = 0; b < grafo[a].size(); b++){
			printf("%d ",grafo[a][b]);
		}
		printf("\n");
	}
}

int main(){
	//freopen("out.txt","w",stdout);
	int E,n;
	scanf("%d",&E);
	grafo.assign(E+15,vi());
	for(int a = 0; a < E; a++){
		int tem;
		scanf("%d",&tem);
		grafo[a].assign(tem,0);
		for(int b = 0; b < tem; b++){
			scanf("%d",&grafo[a][b]);
		}
	}
	//printgrafo();
	scanf("%d",&n);
	for(int a = 0; a < n; a++){
		int x,M = 0,D = 0,tem = 0,temp = 0;
		scanf("%d",&x);
		if(grafo[x].size() == 0){
			printf("0\n");
			continue;
		}
		lista.assign(E+15,-11);
		BFS(x);
		sort(lista.begin(),lista.end());
		for(int b = 0; b < lista.size(); b++){
			if(lista[b] <= 0)continue;
			if(lista[b] == tem){
				temp++;
			}
			if(temp > M){
				M = temp;
				D = tem;
			}
			if(lista[b] != tem){
				tem = lista[b];
				temp = 1;
			}
			
			
		}
		printf("%d %d\n",M,D);
	}
	
	return 0;
}


