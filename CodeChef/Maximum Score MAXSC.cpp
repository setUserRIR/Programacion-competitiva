#include<bits/stdc++.h>

using namespace std;

typedef vector<long long int> vi;

int main(){
	int t;
	scanf("%d",&t);
	
	for(int cas = 0; cas < t; cas++){
		int n;
		scanf("%d",&n);
		vector<vi> list;
		list.assign(n,vi());
		
		long long int max = 1e9+7;
		long long int suma = 0;
		for(int a = 0; a < n; a++){
			list[a].resize(n);
			for(int b = 0; b < n; b++){
				scanf("%d",&list[a][b]);
			}
		}
		
		bool es = true;
		
		for(int a = n-1; a >= 0 && es; a--){
			sort(list[a].begin(),list[a].end());
			for(int b = n-1; b >= 0; b--){
				if(list[a][b] < max){
					max = list[a][b];
					suma += max;
					break;
				}
				if(a == 0)es = false;
			}
		}
		if(es)printf("%lld\n",suma);
		else printf("-1\n");
		
	}
	
	return 0;
}
