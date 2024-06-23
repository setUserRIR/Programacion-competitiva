#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char s[10];
	int n,k;
	scanf("%d %d",&n,&k);
	
	for(int a = 0; a < k; a++){
		scanf("%s",s);
		if(s[0] == 'f') n++;
		else n--;
	}
	
	printf("%d\n",n);
	
	return 0;
}
