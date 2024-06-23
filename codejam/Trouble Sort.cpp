#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int cas = 1; cas <= t; cas++){
		int n,bubble;
		bool cambio = false;
		scanf("%d",&n);
		int array[n];
		for(int a = 0; a < n; a++){
			scanf("%d",&array[a]);
			if(a>=2){
				int a_2 = a-2;
				if(array[a_2] > array[a]){
					cambio = true;
					bubble = array[a_2];
					array[a_2] = array[a];
					array[a] = bubble;
				}
			}
		}
		
		while(cambio){
			cambio = false;
			for(int a = 0; a < n-2; a++){
				int a_2 = a+2;
				if(array[a] > array[a_2]){
					cambio = true;
					bubble = array[a_2];
					array[a_2] = array[a];
					array[a] = bubble;
				}
			}
		}
		
		int error = -1;
		for(int a = 0; a < n-1; a++) if(array[a] > array[a+1]) error = a;
		
		if(error == -1)printf("Case #%d: OK\n",cas);
		else printf("Case #%d: %d\n",cas,error);
		
	}
	
	return 0;
}
