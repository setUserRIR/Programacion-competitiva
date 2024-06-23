#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
	
	int n,m;
	while(scanf("%d %d",&n,&m) != EOF){
		vector<vi> v(1000100,vi());
		
		for(int a = 1; a <= n; a++){
			int t;
			scanf(" %d",&t);
			v[t].push_back(a);
		}
		
		for(int a = 0; a < m; a++){
			int k,t;
			scanf("%d %d",&k,&t);
			if(v[t].size() < k) printf("0\n");
			else printf("%d\n",v[t][k-1]);
		}
		
	}
	
	
	
	return 0;
}
