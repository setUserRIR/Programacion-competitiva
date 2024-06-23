#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void DFS(vector<vi>& v, vi& m, vi& conexo, int n, int c){
	//printf("%d %d\n",n,c);
	m[n] = c;
	conexo.push_back(n);
	for(int a = 0; a < v[n].size(); a++){
		if(m[v[n][a]] == -11) DFS(v,m,conexo,v[n][a],c);
	}
}


int main(){
	
	int N;
	scanf("%d",&N);
	for(int cas = 1; cas <= N; cas++){
		printf("Case #%d:\n",cas);
		int n,m;
		scanf(" %d %d",&n,&m);
		
		vector<vi> grafo(n,vi());
		vector<vi> conexos;
		vector<int> marca(n,-11);
		
		for(int a = 0; a < m; a++){
			char x,y;
			scanf(" %c %c",&x,&y);
			grafo[(int)x-97].push_back((int)y-97);
			grafo[(int)y-97].push_back((int)x-97);
		}
		
		
		for(int a = 0; a < n; a++){
			if(marca[a] == -11){
				conexos.push_back(vi());
				DFS(grafo,marca,conexos[conexos.size()-1],a,a);
			}
		}
	 	//printf("llegue\n");
		for(int a = 0; a < conexos.size(); a++){
			sort(conexos[a].begin(),conexos[a].end());
			for(int b = 0; b < conexos[a].size(); b++){
				printf("%c,",(char)conexos[a][b]+97);
			}
			printf("\n");
		}
		printf("%d connected components\n\n",conexos.size());
		
		
	}
	
	return 0;
}
