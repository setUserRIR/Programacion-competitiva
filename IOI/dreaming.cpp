#include<bits/stdc++.h>
#define INF 1e9+7

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int N;
vector<vii> grafo;
vector<int> visit;

int BFS(int ini, vi &distancia){//el & es para poder modificar el vector que le pase
  queue<int> cola;
  distancia.assign(N,-11);
  distancia[ini] = 0;
  cola.push(ini);
  int max = 0;

  while(!cola.empty()){
    int pos = cola.front();
    cola.pop();
    visit[pos] = 1;
    for(int a = 0; a < grafo[pos].size(); a++){
      int tem = grafo[pos][a].first;
      if(distancia[tem] == -11){
        cola.push(tem);
        distancia[tem] = distancia[pos]+grafo[pos][a].second;
        if(distancia[tem] > distancia[max])max = tem;
      }
    }
  }
  
  for(int a = 0; a < distancia.size(); a++) printf("n%d:%d ",a,distancia[a]); printf("\n");
  return max;
}

int BFS(int ini){ //igual que el otro pero el vector lo creo aqui en vez de pasarlo
  vi distancia;
  queue<int> cola;
  distancia.assign(N,-11);
  distancia[ini] = 0;
  cola.push(ini);
  int max = 0;

  while(!cola.empty()){
    int pos = cola.front();
    cola.pop();
    visit[pos] = 1;
    for(int a = 0; a < grafo[pos].size(); a++){
      int tem = grafo[pos][a].first;
      if(distancia[tem] == -11){
        cola.push(tem);
        distancia[tem] = distancia[pos]+grafo[pos][a].second;
        if(distancia[tem] > distancia[max])max = tem;
      }
    }
  }
  
  for(int a = 0; a < distancia.size(); a++) printf("n%d:%d ",a,distancia[a]); printf("\n");
  return max;
}

int main(){
	int M,L;
	scanf("%d %d %d",&N,&M,&L);
  	grafo.assign(N,vii());
  	visit.assign(N,0);
	for(int a = 0; a < M; a++){
  	    int ini,des,cos;
  	    scanf("%d %d %d",&ini,&des,&cos);
 	   	grafo[ini].push_back(make_pair(des,cos));
 	   	grafo[des].push_back(make_pair(ini,cos));
 	 }
	
	vi centros;
	int conjuntos = abs(N-M);
	
	for(int a = 0; a < N; a++){
		if(visit[a])continue;
		vi D1,D2;
		printf("visite %d\n",a);
	 	int inicio = BFS(a);
	 	
	 	for(int h = 0; h < N; h++)printf("%d, ",visit[h]);printf("\n");
		int final = BFS(inicio,D1), centro = 0;
	 	BFS(final,D2);
	 	for(int b = 0; b < D1.size(); b++){
	 		if(D1[b] == -11)continue;
			int tem = max(D1[b],D2[b]);
			printf("tem es: %d, ",tem);
	 	 	if(tem < max(D1[centro],D2[centro])) centro = b;	
		}
		centros.push_back(centro);
		printf("el centro de %d es: %d = %d\n",a,centro,max(D1[centro],D2[centro]));
	}
	for(int a = 0; a < centros.size(); a++)printf("%d\n",centros[a]);
	
 	return 0;
}
