#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b <= a) b += 24;
	printf("O JOGO DUROU %d HORA(S)\n",b-a);
	
	return 0;
}
