#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int k;
	while(scanf("%d",&k), k){
		int n,m;
		scanf("%d %d",&n,&m);
		for(int a = 0; a < k; a++){
			int x,y;
			scanf("%d %d",&x,&y);
			if(x == n || y== m) printf("divisa\n");
			else if(x > n && y > m)printf("NE\n");
			else if(x < n && y > m)printf("NO\n");
			else if(x > n && y < m)printf("SE\n");
			else if(x < n && y < m)printf("SO\n");
			
		}
	}
	
	return 0;
}
