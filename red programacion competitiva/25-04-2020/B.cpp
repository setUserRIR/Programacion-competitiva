#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){
	
	long long n;
	scanf("%lld",&n);
	
	int digitos = int(log10(n));
	int num = (n/pow(10,digitos));
	long long int potencia = lli(pow(10,digitos));


	if((n - num*potencia) < ((num+1)*potencia - n)) printf("%lld\n",num*potencia);
	else printf("%lld\n",(num+1)*potencia);
	
	return 0;
}
