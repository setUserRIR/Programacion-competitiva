#include<cstdio>
#include<queue>
#include<vector>
#include<utility>

using namespace std;

typedef vector<int> vi;

vector<vi> plano;

int fil,col;
int x[4] = {0, 0,1,-1};
int y[4] = {1,-1,0, 0};

int BFS(int ix,int iy, int dx, int dy){
	queue<pair<int,int> > cola;
	
	plano[ix][iy] = 0;
	cola.push(make_pair(ix,iy));
	while(!cola.empty()){
		int tx = cola.front().first, ty = cola.front().second;
		cola.pop();
		for(int a = 0; a < 4; a++){
			if(tx+x[a] < 0 || ty+y[a] < 0 || tx+x[a] >= fil || ty+y[a] >= col) continue;
			int tmp = plano[tx+x[a]][ty+y[a]];
			if(tmp == -11){
				cola.push(make_pair(tx+x[a],ty+y[a]));
				plano[tx+x[a]][ty+y[a]] = plano[tx][ty]+1;
				if(plano[dx][dy] != -11) return plano[dx][dy];
			}
		}
	}
	return -11;
}

int main(){
	while(scanf("%d %d",&fil,&col), fil || col){
		plano.assign(fil,vi(col,-11));
		int filbom;
		scanf("%d",&filbom);
		for(int a = 0; a < filbom; a++){
			int tfil,cbom;
			scanf("%d %d",&tfil,&cbom);
			for(int b = 0; b < cbom; b++){
				int bomb;
				scanf("%d",&bomb);
				plano[tfil][bomb] = -3;
			}
		}
		int ix,iy,dx,dy;
		scanf("%d %d %d %d",&ix,&iy,&dx,&dy);
		printf("%d\n",BFS(ix,iy,dx,dy));
	}
	return 0;
}
