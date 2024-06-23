#include<bits/stdc++.h>

using namespace std;

bool ord (int i,int j) { return (i>j); }

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int cas = 1; cas <= t; cas++){
		long int n,bubble;
		bool cambio = false;
		scanf("%ld",&n);
		vector<long int> par,impar,final;
		for(int a = 0; a < n; a++){
			scanf("%ld",&bubble);
			if(a%2==0) par.push_back(bubble);
			else impar.push_back(bubble);
		}
		
		sort(par.begin(),par.end(),ord);
		sort(impar.begin(),impar.end(),ord);
		
		for(int a = 0; a < n; a++){
			if(a%2==0){
				final.push_back(par.back());
				par.pop_back();
			}else{
				final.push_back(impar.back());
				impar.pop_back();
			}
		}
		
		int error = -1;
		for(int a = 0; a < n-1; a++) if(final[a] > final[a+1]){error = a;break;}
		
		if(error == -1)printf("Case #%d: OK\n",cas);
		else printf("Case #%d: %d\n",cas,error);
		
	}
	
	return 0;
}
