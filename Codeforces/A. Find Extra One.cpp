#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	int pos=0,neg=0;
	for(int cas = 0; cas < n; cas++){
		int x,y;
		scanf("%d %d",&x,&y);
		if(x > 0) pos++;
		else neg++;
	}
	if(pos > 0 && neg <= 1)printf("yes\n");
	else if(neg > 0 && pos <= 1)printf("yes\n");
	else if(neg == 0 && pos > 0)printf("yes\n");
	else if(pos == 0 && neg > 0)printf("yes\n");
	else printf("no\n");
	
	return 0;
}
