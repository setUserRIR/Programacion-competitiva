#include<bits/stdc++.h>
#define printArr(arr,u) for(int a = 0; a < u; a++) printf("%d%s",arr[a],a==u-1 ? "\n":" ")
#define printMat(arr,u,v) for(int a = 0; a < u; a++) for(int b = 0; b < v; b++) printf("%d%s",arr[a][b],b==v-1 ? "\n":" ")

using namespace std;

int main(){
	
	int cas;
	scanf("%d",&cas);
	
	while(cas--){
		int n,total = 0;
		scanf("%d",&n);
		int coins[n];
		for(int a = 0; a < n; a++){
			scanf("%d",&coins[a]);
			total += coins[a];
		}
		
		int mit = total/2;
		
		int mochila[n+1][mit+1];
		for(int a = 0; a <= n; a++) mochila[a][0] = 0;
		for(int a = 0; a <= mit; a++) mochila[0][a] = 0;
		
		for(int a = 1; a <= n; a++){
			for(int b = 1; b <= mit; b++){
				if(coins[a-1] <= b) mochila[a][b] = max(mochila[a-1][b], coins[a-1] + mochila[a-1][b-coins[a-1]]);
				else mochila[a][b] = mochila[a-1][b];
			}
		}
		
		//printMat(mochila,n+1,mit+1);
		printf("%d\n",total - mochila[n][mit]*2);
	}
	
	return 0;
}
