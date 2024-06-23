#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main(){
	int n;
	scanf("%d",&n);
	
	vector<vii> grafo(n,vii());
	int taxs[n];
	
	for(int a = 0; a < n; a++){
		scanf("%d",&taxs[a]);
	}
	
	for(int a = 0; a < n-1; a++){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		grafo[x-1].push_back(make_pair(y-1,z));
		grafo[y-1].push_back(make_pair(x-1,z));
	}
	
	for(int c = 0; c < n; c++){
		vi distancia(n,1e9);
		queue<int> cola;
		cola.push(c);
		distancia[c] = 0;
		
		while(!cola.empty()){
			int nodo = cola.front();
			cola.pop();
			
			for(int a = 0; a < grafo[nodo].size(); a++){
				ii des = grafo[nodo][a];
				if(distancia[nodo]+des.second < distancia[des.first]){
					distancia[des.first] = distancia[nodo]+des.second;
					cola.push(des.first);
				}
			}
		}
		
		int suma = 0;
		for(int b = 0; b < n; b++){
			//printf("%d %d %d |",a,b,abs(distancia[a]));
			suma += (taxs[c]+taxs[b])*distancia[b];
		}
		printf("%d\n",suma);
		
	}
	
	
		
	
	
	
	//printf("%d\n",distancia[n-1]-1);
	
	
	return 0;
}
