#include<bits/stdc++.h>

#define printv(v,n) for(int a = 0; a < n; a++) (a != n-1) ? printf("%d ",v[a]): printf("%d\n",v[a]);

using namespace std;

int main(){
	
	int n;
	while(scanf("%d",&n),n){
		int v[n], car, pos;
		memset(v,-1,n*4);
		bool flag = true;
		for(int a = 0; a < n; a++){
			scanf("%d %d",&car,&pos);
			if(!flag)continue;
			int t = a + pos;
			if(t >= n || t < 0) flag = false;
			else{
				if(v[t] != -1) flag = false;
				else v[t] = car;
			}
		}
		
		if(flag) printv(v,n)
		else printf("-1\n");
		
	}
	
	return 0;
}
