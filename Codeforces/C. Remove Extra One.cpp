#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	
	int arreglo[n],secuencia[n],ante = 0,con = 0,limite[n];
	memset(secuencia,0,sizeof secuencia);
	
	for(int a = 0; a < n; a++){
		int x;
		scanf("%d",&x);
		arreglo[a] = x;
		if(x > ante)secuencia[con]++;
		else{
			limite[con] = a;
			con++;
			secuencia[con]++;
		}
		if(a == n-1)limite[con] = a;
		ante = x;
	}
	for(int a = 0; a < 3; a ++){
		printf("secuencia %d: %d  limite: %d\n",a+1,secuencia[a],arreglo[limite[a]]);
	}
	
	return 0;
}
