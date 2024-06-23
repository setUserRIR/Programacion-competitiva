#include <iostream>
#include <cstdio>
using namespace std;

int ciclo1 (int n){
	int a;
	//printf("%d ",n);
	for(a = 1; n != 1; a++){
	
		if(n % 2 == 0){
			n = n/2;
		}else{
			n = 3 * n + 1;
		}
		//printf("%d ",n);
	}
	return a;
	}
	
int main(){
	//freopen("datos_3n+1.txt","r",stdin);
	
	int n1, n2, aux,cont,i2,j2;
	int cicloMaximo = -1;
	
	while(scanf("%d %d",&n1,&n2)==2){
	
	i2 = n1;
	j2 = n2;
	
	if(n1 > n2){
		aux = n2;
		n2 = n1;
		n1 = aux;
	}
	
	for (int i = n1; i <= n2; ++i) {
		
		int salida = ciclo1(i);
		if (salida > cicloMaximo) {
			cicloMaximo = salida;
		}
	}
	printf("%d %d %d\n", i2, j2, cicloMaximo);
	cont++;

	cicloMaximo = 0;
}
	
	return 0;
}

