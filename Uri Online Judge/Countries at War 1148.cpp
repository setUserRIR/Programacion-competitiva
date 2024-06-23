#include<bits/stdc++.h>
#define INF 1e9+7

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

struct srt{bool operator()(ii a, ii b){return a.second < b.second;}};

struct dkstra{
	vector<vii> grafo;
	vi dis;
	int tam;
	
	dkstra(int nodos){
		grafo.assign(nodos,vii());
		tam = nodos;
	}
	void push(int N,int D,int P){//ingreso el nodo,el destino y peso
		grafo[N].push_back(ii(D,P));
	}
	void check(){
		int gt;
		for(int a = 0; a < tam-1; a++){
			for(int b = 0; b < grafo[a].size(); b++){
				if(grafo[a][b].second == 0) continue;
				gt = grafo[a][b].first;
				if(gt < a) continue;
				for(int c = 0; c < grafo[gt].size(); c++){
					if(grafo[gt][c].first == a){
						grafo[a][b].second = 0;
						grafo[gt][c].second = 0;
					}
				}
			}
		}
	}
	int magia(int ini,int des){
		dis.assign(tam,INF);
		priority_queue<ii, vii, srt> cola;
		dis[ini] = 0;//inicio parte en 0
		cola.push(ii(ini,dis[ini]));//meto a la cola el nodo y la distancia
		int total;
		while(!cola.empty()){
			ii pos = cola.top();
			cola.pop();//saco el dato de la cola
			int tdis = pos.second,tnod = pos.first;//desmenuso el pair
			if(tdis > dis[tnod])continue;//si la distancia es mayor a la guardada ignora
			
			for(int a = 0; a < grafo[tnod].size(); a++){
				ii v = grafo[tnod][a];//saco a un vecino
				if(dis[tnod] + v.second < dis[v.first]){
					//si la suma de las distancias es menor a la registrada las guardo
					dis[v.first] = dis[tnod] + v.second;
					cola.push(ii(v.first,dis[v.first]));//encolo el vecino
					if(dis[des] < INF) total = dis[des];//si el vecino lo encuentra almaceno
				}
			}
		}
		return total;
	}
	
	int getdis(int x){return dis[x];};
};

int main(){
	
	int n,e;
	while(scanf("%d %d",&n,&e), n||e){
		dkstra dk(n);
		int x,y,h,k,o,d;
		for(int a = 0; a < e; a++){
			scanf("%d %d %d",&x,&y,&h);
			dk.push(--x,--y,h);
		}
		dk.check();
		scanf("%d",&k);
		for(int a = 0; a < k; a++){
			scanf("%d %d",&o,&d);
			dk.magia(--o,d-1);
			int r = dk.getdis(d-1);
			if(r == INF)printf("Nao e possivel entregar a carta\n");
			else printf("%d\n",r);
			
			//for(int a = 0; a < 5; a++)printf("%d\n",dk.getdis(a));
		}
		printf("\n");
	}
	

	
	//printf("%d\n\n",dk.magia(0,2));
//	printf("%d\n\n",dk.magia(2,0));
	
	
	return 0;
}
