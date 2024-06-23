#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,am,bm;
	scanf("%d %d %d %d",&a,&am,&b,&bm);
	if(b <= a && bm <= am) b += 24;
	a = 60*a+am;
	b = 60*b+bm;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(b-a)/60,(b-a)%60);
	
	return 0;
}
