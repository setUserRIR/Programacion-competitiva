#include<cstdio>

int main(){
	
	int N,caso = 1;
	while(scanf("%d",&N), N){
		int s=0,n=0;
		for(int a = 0; a < N; a++){
			int v;
			scanf("%d",&v);
			if(v > 0) n++;
			else s++;
		}
		printf("Case %d: %d\n",caso,n-s);
		caso++;
	}
	
	return 0;
}
