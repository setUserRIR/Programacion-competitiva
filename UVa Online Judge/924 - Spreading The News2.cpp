#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> grafo;
vi dis,boom;

int BFS(int ini){
	int cont = 0;
	dis.assign(grafo.size(),-11);
	boom.assign(grafo.size(),0);
	queue<int> cola;
	//map<int,int> ma;
	
	cola.push(ini);
	dis[ini] = 0;
	
	while(!cola.empty()){
		int pos = cola.front();
		cola.pop();
		
		
		for(int a = 0; a < grafo[pos].size(); a++){
			if(dis[grafo[pos][a]] == -11){
				boom[dis[pos]+1]++;
				if(boom[dis[pos]+1] > boom[cont])cont = dis[pos]+1;
				dis[grafo[pos][a]] = dis[pos] + 1;
				cola.push(grafo[pos][a]);
			}
		}
	}
	
	return cont;
}

int main(){
	
	int E;
	scanf("%d",&E);
	
	grafo.assign(E,vi());
	
	
	for(int a = 0; a < E; a++){
		int n;
		scanf(" %d",&n);
		for(int b = 0; b < n; b++){
			int t;
			scanf(" %d",&t);
			grafo[a].push_back(t);
		}
	}
	
	int N;
	scanf("%d",&N);
	
	for(int a = 0; a < N; a++){
		int t;
		scanf("%d",&t);
		int pt = BFS(t);
		if(boom[pt]) printf("%d %d\n",boom[pt],pt);
		else printf("0\n");
		
	}
	
	
	return 0;
}
