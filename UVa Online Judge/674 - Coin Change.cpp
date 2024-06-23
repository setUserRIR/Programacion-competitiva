#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,monedas[5] = {50,25,10,5,1};
	
	
	while(scanf("%d",&n) != EOF){
		int coins[n+1];
		memset(coins,0,(n+1)*4);
		
		coins[0] = 1;
		
		for(int b = 0; b < 5; b++){
			for(int a = monedas[b];a <= n; a++){
				if(a-monedas[b] >= 0) coins[a] += coins[a-monedas[b]];
			}	
		}
		printf("%d\n",coins[n]);
	}
	
	return 0;
}
