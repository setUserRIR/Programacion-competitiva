#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int mx[] = {1,-1, 0, 0};
int my[] = {0, 0, 1,-1};

int BFS(vector<vi>& mapa, int xi, int yi, int xd, int yd){
	int limx = mapa.size(), limy = mapa[0].size();
	
	queue<pair<int,int>> cola;
	cola.push(make_pair(xi,yi));
	mapa[xi][yi] = 0;
	
	while(!cola.empty()){
		
		pair<int,int> pos = cola.front();
		int x = pos.first, y = pos.second;
		cola.pop();
		
		for(int a = 0; a < 4; a++){
			if(x+mx[a] >= 0 && x+mx[a] < limx && y+my[a] >= 0 && y+my[a] < limy && mapa[x+mx[a]][y+my[a]] == -11){
				mapa[x+mx[a]][y+my[a]] = mapa[x][y] + 1;
				if(x+mx[a] == xd && y+my[a] == yd) return mapa[x+mx[a]][y+my[a]];
				cola.push(make_pair(x+mx[a],y+my[a]));
			}
		}
		
	}
	return -1;
}

int main(){
	int filas,columnas;
	while(scanf("%d %d",&filas,&columnas), filas || columnas){
		int bombs;
		vector<vi> mapa(filas,vi(columnas,-11));
		
		scanf(" %d",&bombs);
		for(int a = 0; a < bombs; a++){
			int x,can,y;
			scanf(" %d %d",&x,&can);
			for(int b = 0; b < can; b++){
				scanf(" %d",&y);
				mapa[x][y] = -1;
			}
		}
		int ix,iy,dx,dy;
		scanf(" %d %d %d %d",&ix,&iy,&dx,&dy);
		printf("%d\n",BFS(mapa,ix,iy,dx,dy));
	}	
	
	return 0;
}
