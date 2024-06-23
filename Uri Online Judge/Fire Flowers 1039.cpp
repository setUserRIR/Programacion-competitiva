#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int r1,x1,y1,r2,x2,y2;
	
	while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
		if(sqrt(pow(x1-x2,2)+pow(y1-y2,2)) <= r1-r2) printf("RICO\n");
		else printf("MORTO\n");
	}
	
	return 0;
}
