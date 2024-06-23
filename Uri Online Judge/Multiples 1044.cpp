#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(!(a%b) || !(b%a)) printf("Sao Multiplos\n");
	else printf("Nao sao Multiplos\n");
	
	return 0;
}
