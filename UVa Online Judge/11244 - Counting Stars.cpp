#include<cstdio>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int x[8] = {-1, 0, 1,-1,1,-1,0,1};
int y[8] = {-1,-1,-1, 0,0, 1,1,1};

int fil,col;

vector<string> matriz;

int quitastar(int px, int py){
	int cont = 1;
	if(px < 0 || px >= fil || py < 0 || py >= col)return 0;
	if(matriz[px][py] == '.') return 0;
	
	matriz[px][py] = '.';
	for(int a = 0; a < 8; a++)
		cont += quitastar(px+x[a],py+y[a]);
	return cont;
}

int main(){
	while(scanf("%d %d",&fil,&col), fil || col){
		matriz.assign(fil,string());
		
		for(int a = 0; a < fil; a++)
			cin >> matriz[a];
		
		int cont = 0;
		for(int a = 0; a < fil; a++){
			for(int b = 0; b < col; b++){
				if(matriz[a][b] == '*'){
					int temp = quitastar(a,b);
					if(temp == 1) cont++;
				}
			}
		}
		printf("%d\n",cont);
	}
	return 0;
}
