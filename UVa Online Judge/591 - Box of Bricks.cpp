#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,cas = 1;
	while(scanf("%d",&n),n){
		int suma = 0,v[n];
		for(int a = 0; a < n; a++){
			int t;
			scanf("%d",&t);
			suma += t;
			v[a] = t;
		}
		int tam = suma/n;
		suma = 0;
		for(int a = 0; a < n; a++) suma += (v[a] > tam) ? v[a] - tam: 0;
		
		printf("Set #%d\n",cas);
		printf("The minimum number of moves is %d.\n",suma);
		cas++;
		printf("\n");	
	}
	
	return 0;
}
