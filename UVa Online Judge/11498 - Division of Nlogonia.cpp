#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n), n){
		int x,y;
		scanf("%d %d",&x,&y);
		for(int a = 0; a < n; a++){
			int tx,ty;
			scanf("%d %d",&tx,&ty);
			tx -= x;
			ty -= y;
			
			if(ty == 0 || tx == 0)printf("divisa\n");
			else if(ty > 0 && tx > 0)printf("NE\n");
			else if(ty > 0 && tx < 0)printf("NO\n");
			else if(ty < 0 && tx > 0)printf("SE\n");
			else if(ty < 0 && tx < 0)printf("SO\n");
		}
	}
	
	return 0;
}


