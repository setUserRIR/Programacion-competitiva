#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int DFS(int pos,vector<vi>& v, vi& m,int cont = 1){
	m[pos] = 1;
	
	for(int a = 0; a < v[pos].size(); a++){
		if(m[v[pos][a]] == -11) cont += DFS(v[pos][a],v,m);
	}
	
	return cont;
}

int main(){
	
	int T;
	scanf("%d",&T);
	
	for(int cas = 0; cas < T; cas++){
		
		int ini,n,m;
		scanf(" %d %d %d",&ini,&n,&m);
		vector<vi> grafo(n,vi());
		vi vis(n,-11);
		
		for(int a = 0; a < m; a++){
			int x,y;
			scanf(" %d %d",&x,&y);
			grafo[x].push_back(y);
			grafo[y].push_back(x);
		}
		
		printf("%d\n",DFS(ini,grafo,vis,0)*2);
	}
	
	return 0;
}
