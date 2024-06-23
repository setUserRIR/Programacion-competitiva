#include<bits/stdc++.h>

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int a = 0; a < t; a++){
		int n;
		scanf("%d",&n);
		long int p = pow(2,n);
		printf("%ld\n",(p-1));
	}
	
	return 0;
}
