#include<bits/stdc++.h>
#define printMat(arr,u,v) for(int a = 0; a < u; a++) for(int b = 0; b < v; b++) printf("%d%s",arr[a][b],b==v-1 ? "\n":" ")
#define printArr(arr,u) for(int a = 0; a < u; a++) printf("%d%s",arr[a],a==u-1 ? "\n":" ")

using namespace std;


int main(){
	
	string p1,p2;
	while(cin >> p1){
		cin >> p2;
		
		int t1 = p1.size()+1, t2 = p2.size()+1;  //creo las variables tamaño, son el tamaño de las palabras + 1
		int dist[t1][t2]; //creo la matriz de las distancias
		char disc[t1][t2][10];
		
		//relleno las primeras filas y columnas con lo que costaria llegar de nada a 'x' letra 
		for(int a = 0; a < t1; a++) dist[a][0] = a;
		for(int a = 0; a < t2; a++) dist[0][a] = a;
		
		sprintf(disc[0][0],"|*****|");
		for(int a = 1; a < t1; a++) sprintf(disc[a][0],"|a %d %c|",a, p1[a-1]);
		for(int a = 1; a < t2; a++) sprintf(disc[0][a],"|a %d %c|",a, p2[a-1]);
		
		//empiezo a dar los valores, escogiendo el minimo entre eliminar, agregar o modificar
		for(int a = 1; a < t1; a++){
			for(int b = 1; b < t2; b++){
				
				int del = dist[a-1][b] + 1, add = dist[a][b-1] + 1, mod = dist[a-1][b-1] + (p1[a-1] == p2[b-1] ? 0 : 1);
				
				if(del < add && del < mod){
					dist[a][b] = del;
					sprintf(disc[a][b],"| d %d |",a);
				}else if(add < del && add < mod){
					dist[a][b] = add;
					sprintf(disc[a][b],"|a %d %c|",a, p1[a-1]);
				}else{
					dist[a][b] = mod;
					sprintf(disc[a][b],"|m %d %c|",a, p1[a-1]);
				}
				
			}
		}
		
		printMat(dist,t1,t2);
		
		printf("\n\n");
		
		for(int a = 0; a < t1; a++){
			for(int b = 0; b < t2; b++){
				printf("%s%s",disc[a][b],b==t2-1 ? "\n":"   ");
			}
		}
		
		
	}
	
	
	
	return 0;
}
