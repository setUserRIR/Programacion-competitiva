#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	
	while(n--){
		
		int p;
		scanf("%d",&p);
		
		long long int v[p];
		scanf("%lld",&v[0]);
		
		for(int a = 1; a < p; a++){
			long long int t;
			scanf("%lld",&t);
			v[a] = v[a-1]+t;
		}
		
		int dias = 1,pos = 0;
		while(1){
			pos += v[pos];
			if(pos >= p-1) break;
			if(v[pos] >= p) break;
			else dias++;
		}
		
		printf("%d\n",dias);
		
	}
	
	return 0;
}
