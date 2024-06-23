#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int cas;
	scanf("%d",&cas);
	
	while(cas--){
		
		int n,w = 0;
		scanf("%d",&n);
		
		int precio[n], peso[n];
		bool check[n];
		for(int a = 0; a < n; a++){
			scanf("%d %d",&precio[a],&peso[a]);
			check[a] = false;
		}
		
		int p;
		scanf("%d",&p);
		int fam[p];
		for(int a = 0; a < p; a++){
			scanf("%d",&fam[a]);
			if(fam[a] > w) w = fam[a];
		}
		int mochila[n+1][w+1];
		for(int a = 0; a <= n; a++) mochila[a][0] = 0;
		for(int a = 0; a <= w; a++) mochila[0][a] = 0;
		
		for(int a = 1; a <= n; a++){
			for(int b = 1; b <= w; b++){
				if(peso[a-1] <= b) mochila[a][b] = max(mochila[a-1][b], precio[a-1] + mochila[a-1][b-peso[a-1]]);
				else mochila[a][b] = mochila[a-1][b];
			}
		}
		int total = 0;
		for(int a = 0; a < p; a++) total += mochila[n][fam[a]];
		printf("%d\n",total);
		
	}
	
	return 0;
}
