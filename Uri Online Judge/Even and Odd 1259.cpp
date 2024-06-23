#include<bits/stdc++.h>

using namespace std;

bool sr(int a, int b){
	int am = a%2, bm = b%2;
	if(am == 0 && bm == 0) return a < b;
	else if(am == 0 && bm != 0) return true;
	else if(am != 0 && bm == 0) return false;
	else return a > b;
	
}

int main(){
	
	int n,t;
	scanf("%d",&n);
	int v[n];
	for(int a = 0; a < n; a++) scanf("%d",&v[a]);
	sort(v,v+n,sr);
	for(int a = 0; a < n; a++) printf("%d\n",v[a]);
	
	return 0;
}
