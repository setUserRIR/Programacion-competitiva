#include<bits/stdc++.h>

using namespace std;

int main(){

	long long int n,m;	
	scanf("%lld %lld",&n,&m);

	
	long long int num = 1;
	
	if(n == m) printf("1\n");
	else if((m-n) >= 5) printf("0\n");
	else{
		for(long long int a = n+1; a <= m; a++){
			num = (num * (a%10)) %10;
		}
		printf("%lld\n",num%10);
	}
	
	
	return 0;
}
