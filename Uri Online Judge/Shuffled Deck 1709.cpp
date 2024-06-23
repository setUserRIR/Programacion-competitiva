#include<bits/stdc++.h>

using namespace std;

int deckSort(int *v, int tam){
	int t[tam],cont = 0;
	do{
		cont++;
		for(int a = 0,b = 1; a < tam/2; a++, b+=2) t[b] = v[a];
		for(int a = tam/2,b = 0; a < tam; a++, b+=2) t[b] = v[a];
		memcpy(v,t,tam*4);
		//for(int a = 0; a < tam; a++)printf("%d ",v[a]);
		//printf("\n");
	}while(v[0] != 0 || v[tam-1] != tam-1);
	return cont;
}

int deckSort(int tam){
	int m = tam/2, pos = 0,cont = 0;
	do{
		cont++;
		if(pos < m) pos = 1+2*pos;
		else pos = 2*(pos-m);
	}while(pos != 0);
	return cont;
}

int main(){
	
	int n;
	scanf("%d",&n);
	//for(n = 2; n < 60; n+=2){
	
	//int v[n];
	//for(int a = 0; a < n; a++)v[a] = a;
	printf("%d\n",deckSort(n));
	//for(int a = 0; a < n; a++)printf("%d ",v[a]);
	
//}
	
	return 0;
}
