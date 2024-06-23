#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

//typedef vector<string> vs;

int tam;
vector<string> matriz;

int x[8] = {1,0,-1, 0, 1,1,-1,-1};
int y[8] = {0,1, 0,-1,-1,1, 1,-1};

void quita1(int xp, int yp){
	if(xp >= 0 && xp < tam && yp >= 0 && yp < tam){
		if(matriz[xp][yp] == '1'){
			matriz[xp][yp] = '0';
			for(int a = 0; a < 8; a++){
				int tx = xp+x[a], ty = yp+y[a];
				quita1(tx,ty);
			}
		}	
	}	
}

int main(){
	int caso = 1;
	while(scanf("%d",&tam) != EOF){
		matriz.assign(tam,string());
		for(int a = 0; a < tam; a++){
			//for(int b = 0; b < tam; b++){
				cin >> matriz[a];
			//}
		}
		int cont = 0;
		
		for(int a = 0; a < tam; a++){
			for(int b = 0; b < tam; b++){
				if(matriz[a][b] == '1'){
					quita1(a,b);
					cont++;
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",caso,cont);
		caso++;
	}
	return 0;
}
