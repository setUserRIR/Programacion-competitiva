#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n, cont = 0;
	scanf("%d",&n);
	for(int a = 0; a < 5; a++){
		int t;
		scanf("%d",&t);
		if(t == n) cont++;
	}
	
	printf("%d\n",cont);
	
	return 0;
}
