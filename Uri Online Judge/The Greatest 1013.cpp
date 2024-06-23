#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d eh o maior\n",max(c,max(a,b)));
	
	return 0;
}
