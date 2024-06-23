#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	while(scanf("%d %d",&n,&k), n || k){
		map<int,int> m;	
		map<int,int>::iterator it;
		int t,cont = 0;
		for(int a = 0; a < n; a++){
			scanf("%d",&t);
			m[t]++;
		}
		
		for(it = m.begin(); it != m.end(); it++) if(it->second >= k) cont++;
		
		printf("%d\n",cont);
		
	}
	
	return 0;
}
