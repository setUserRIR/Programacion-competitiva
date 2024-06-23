#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int c;
	scanf("%d",&c);
	
	for(int cas = 1; cas <= c; cas++){
		
		int n;
		scanf("%d",&n);
		
		int ini = 0, init = 0, fin = 0, sum = 0, ans = INT_MIN,t;
		for(int a = 0; a < n-1; a++){
			scanf("%d",&t);
			sum += t;
			
			if(ans < sum){
				ans = sum;
				ini = init;
				fin = a;
			}else if(ans == sum){
				if(fin - ini < a - init){
					ini = init;
					fin = a;
				}
			}
			if(sum < 0){
				sum = 0;
				init = a+1;
			}
		}
		
		if(ans < 0) printf("Route %d has no nice parts\n",cas);
		else printf("The nicest part of route %d is between stops %d and %d\n",cas,ini+1,fin+2);
	}
	
	return 0;
}
