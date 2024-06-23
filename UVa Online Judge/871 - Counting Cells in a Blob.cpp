#include<cstdio>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

int x[8] = {-1, 0, 1,-1,1,-1,0,1};
int y[8] = {-1,-1,-1, 0,0, 1,1,1};

int tam;

vector<string> matriz;

int quita1(int px, int py){
	int cont = 1;
	if(px < 0 || px >= tam || py < 0 || py >= tam)return 0;
	if(matriz[px][py] == '0') return 0;
	
	matriz[px][py] = '0';
	for(int a = 0; a < 8; a++)
		cont += quita1(px+x[a],py+y[a]);
	return cont;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int cas = 0; cas < n; cas++){
		getchar();
		string tems;
		cin >> tems;
		tam = tems.size();
		matriz.assign(tam,string());
		matriz[0] = tems;
		
		for(int a = 1; a < tam; a++){
			cin >> matriz[a];
		}
			
		
		int cont = 0;
		for(int a = 0; a < tam; a++){
			for(int b = 0; b < tam; b++){
				if(matriz[a][b] == '1'){
					int temp = quita1(a,b);
					if(temp > cont) cont = temp;
				}
			}
		}
		printf("%d\n",cont);
		if(n > 1 && cas < n-1) printf("\n");
	}
	return 0;
}
