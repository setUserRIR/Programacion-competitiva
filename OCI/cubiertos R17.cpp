#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t,tc,tr,c,cc,cr;
	scanf("%d %d %d %d %d %d",&t,&tc,&tr,&c,&cc,&cr);
	
	int x = t-c;
	
	if(x > 0) printf("%d\n",min(tr*x,cc*x));
	else if(x < 0) printf("%d\n",min(cr*x*-1,tc*x*-1));
	else printf("0\n");
	
	return 0;
}
