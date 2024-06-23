#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	while(scanf("%d %d",&n,&m), n || m){
		map<int,int> ma;
		int t,cont = 0;
		for(int a = 0; a < n; a++){
			scanf("%d",&t);
			ma[t]++;
		}
		
		for(int a = 0; a < m; a++){
			scanf("%d",&t);
			ma[t]++;
			if(ma[t] == 2) cont++;
		}
		
		printf("%d\n",cont);
	}
	
	return 0;
}
