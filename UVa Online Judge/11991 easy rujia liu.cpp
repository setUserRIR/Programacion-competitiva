#include<map>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
	
	int n,m;
	while(scanf("%d %d",&n,&m) != EOF){
		map<int,vector<int> > matriz;
		for(int a = 1; a <= n; a++){
			int temp;
			scanf("%d",&temp);
			matriz[temp].push_back(a);
		}
		for(int a = 0; a < m; a++){
			int k,v;
			scanf("%d %d",&k,&v);
			if(k <= matriz[v].size()){
				printf("%d\n",matriz[v][k-1]);
			}else{
				printf("0\n");
			}
		}
	}
	
	return 0;
}
