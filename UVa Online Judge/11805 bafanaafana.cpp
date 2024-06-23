#include<cstdio>
#define FOR(a,b,c) for(int a = b; a < c; a++)

int main(){
	
	int T;
	scanf("%d",&T);
	
	FOR(a,0,T){
		int N,K,P;
		scanf("%d %d %d",&N,&K,&P);
		FOR(b,0,P){
			K++;
			if(K > N) K = 1;
		}
		printf("Case %d: %d\n",a+1,K);
	}
	
	return 0;
}
