#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);
	int v[n];
	
	for(int a = 0; a < n; a++){
		int x,y;
		scanf("%d %d",&x,&y);
		v[a] = ceil(hypot(x,y));
	}
	
	sort(v,v+n);
	
	printf("%d\n",v[k-1]);
	
	return 0;
}
