#include<bits/stdc++.h>

using namespace std;

#define printl for(int b = 1; b <= n; b++)printf("%d:%d,%d   ",b,l[b].first,l[b].second);


int main(){
	
	int c;
	scanf("%d",&c);
	
	for(int a = 1; a <= c; a++){//casos
		//declaro variables y las leo
		int n,k;
		scanf("%d %d",&n,&k);
		
		if(n == 1){
			printf("Case %d: 1\n",a);
			continue;
		}
		
		pair<int,int> l[n+1];		
		
		//lleno el arreglo
		for(int b = 1; b <= n; b++){
			l[b+1].first = b;
			l[b-1].second = b;
		}
		l[1].first = n;
		l[n].second = 1;
		
		//opero
		//matar(k,0);
		
		int ini = k%n,piv = 0;
		while(1){
			if(l[ini].first == l[ini].second && l[ini].first == ini){
				printf("Case %d: %d\n",a,ini);
				break;
			}
			if(piv != 0){
				ini = l[ini].second;
				piv--;
			}else{
				l[l[ini].first].second = l[ini].second;
				l[l[ini].second].first = l[ini].first;
				ini = l[ini].second;
				piv = k-1;
			}	
		}
		
	}
	return 0;
}
