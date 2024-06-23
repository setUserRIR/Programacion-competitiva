#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	for(int a = 0; a < n; a++){
		int w,x,y,z;
		scanf("%d %d %d %d",&w,&x,&y,&z);
		if((w == x && y == z) || (w == y && x == z) || (w == z && y == x)){
			printf("YES\n");
		}else printf("NO\n");
	}
	
	return 0;
}
