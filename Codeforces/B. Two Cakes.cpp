//code by RIR
#include<bits/stdc++.h>

#define INF 1e9+7

using namespace std;

int main(){
	int n, trozo1,trozo2;
	scanf("%d %d %d",&n,&trozo1,&trozo2);
	n /= 2;
	if(trozo1 < n || trozo2 < n){
		if(trozo1 > trozo2)printf("%d\n",trozo2);
		else printf("%d\n",trozo1);	
	}else{
		trozo1 /= n;
		trozo2 /= n;
		
		if(trozo1 > trozo2)printf("%d\n",trozo2);
		else printf("%d\n",trozo1);	
	}
	
	return 0;
}
