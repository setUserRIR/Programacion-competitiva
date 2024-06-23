#include<bits/stdc++.h>

using namespace std;

int main(){
	
	double au;
	scanf("%lf",&au);
	int a = int(au);
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",a/100);
	a = a%100;
	printf("%d nota(s) de R$ 50.00\n",a/50);
	a = a%50;
	printf("%d nota(s) de R$ 20.00\n",a/20);
	a = a%20;
	printf("%d nota(s) de R$ 10.00\n",a/10);
	a = a%10;
	printf("%d nota(s) de R$ 5.00\n",a/5);
	a = a%5;
	printf("%d nota(s) de R$ 2.00\n",a/2);
	a = a%2;
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",a/1);
	au -= int(au);
	a = int(au*100);
	//printf("%lf %d",au,a);
	printf("%d moeda(s) de R$ 0.50\n",a/50);
	a = a%50;
	printf("%d moeda(s) de R$ 0.25\n",a/25);
	a = a%25;
	printf("%d moeda(s) de R$ 0.10\n",a/10);
	a = a%10;
	printf("%d moeda(s) de R$ 0.05\n",a/5);
	a = a%5;
	printf("%d moeda(s) de R$ 0.01\n",a/1);
	
	return 0;
}
