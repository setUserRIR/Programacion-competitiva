#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

struct spam{
	int spamer,r1,r2;
	char a1[30],a2[30],a3[30];
	
	char* type(int x){
		if(x < r1) return a1;
		else if(x >= r1 && x < r2) return a2;
		else return a3;
	}
};

void DFS(int ini, vector<vi>& v, vi& d){
	d[ini] = 1;
	for(int a = 0; a < v[ini].size(); a++){
		if(d[v[ini][a]] == 0) DFS(v[ini][a],v,d);
	}
}

int main(){
	
	int n;
	while(scanf("%d",&n), n){
		vector<vi> grafo(n,vi());
		vector<spam> spams;
		vector<string> nombres;
		
		for(int a = 0; a < n; a++){
			int t;
			while(scanf("%d",&t), t) grafo[a].push_back(t-1);
		}
		
		int spamer;
		
		while(scanf("%d",&spamer), spamer){
			spam st;
			st.spamer = spamer-1;
			scanf(" %d %d %s %s %s",&st.r1,&st.r2,st.a1,st.a2,st.a3);
			spams.push_back(st);
		}
		
		for(int a = 0; a < n; a++){
			char s[30];
			scanf(" %s",s);
			nombres.push_back(string(s)+": ");
		}
		
		for(int a = 0; a < spams.size(); a++){
			vi vis(n,0);
			DFS(spams[a].spamer,grafo,vis);
			for(int b = 0; b < n; b++){
				if(vis[b]){
					nombres[b] += string(spams[a].type(grafo[b].size())) +" ";
				}else{
					nombres[b] += string(spams[a].type(0)) +" ";
				}
			}
		}
		
		for(int a = 0; a < n; a++) printf("%s\n",nombres[a].c_str());
	}
	
	return 0;
}
