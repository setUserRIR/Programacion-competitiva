#include<bits/stdc++.h>
#define INF 1e9+7

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

struct sor{
	bool operator()(ii a, ii b) {
		return a.second < b.second;
	}
};

int main(){
	
	int ca;
	scanf("%d",&ca);
	for(int cas = 1; cas <= ca; cas++){
		
		int n,m,ini,des;
		scanf("%d %d %d %d",&n,&m,&ini,&des);
		
		vector<vii> grafo(n,vii());
		vi dist(n,INF);
		
		for(int a = 0; a < m; a++){
			int u,v,p;
			scanf("%d %d %d",&u,&v,&p);
			grafo[u].push_back(ii(v,p));
			grafo[v].push_back(ii(u,p));
		}
		
		priority_queue<ii,vii,sor> cola;
		dist[ini] = 0;
		cola.push(ii(ini,0));
		
		while(!cola.empty()){
			ii T = cola.top();
			cola.pop();
			int Na = T.first, Pa = T.second;
			
			if(dist[Na] < Pa) continue;
			
			for(int a = 0; a < grafo[Na].size(); a++){
				int Nv = grafo[Na][a].first, Pv = grafo[Na][a].second;
				if(dist[Nv] > dist[Na] + Pv){
					dist[Nv] = dist[Na] + Pv;
					cola.push(ii(Nv,dist[Nv]));
				}
			}
		}
		if(dist[des] == INF) printf("Case #%d: unreachable\n",cas);
		else printf("Case #%d: %d\n",cas,dist[des]);
	}
	
}
