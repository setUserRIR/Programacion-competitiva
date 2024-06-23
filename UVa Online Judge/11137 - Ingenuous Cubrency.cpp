#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	while(scanf("%d",&n) != EOF){
		
		long long int coins[n+1];
		
		memset(coins,0,sizeof(coins[0])*(n+1));
		coins[0] = 1;
		
		for(int b = 1; b <= 21; b++){
			long long int m = b*b*b;
			if(m > n) break;
			
			for(int a = m; a <= n; a++){
				coins[a] += coins[a-m];
			}
		}
		printf("%lld\n",coins[n]);
	}
	
	return 0;
}
