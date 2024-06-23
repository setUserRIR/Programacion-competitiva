#include<bits/stdc++.h>

using namespace std;

void swap(int &cont, int *p1, int *p2){
	int bubble = *p1;
	*p1 = *p2;
	*p2 = bubble;
	cont++;
}

int main(){
	//freopen("out.txt","w",stdout);
	int n;
	scanf("%d",&n);
	for(int cas = 0; cas < n; cas++){
		
		int l;
		scanf("%d",&l);
		int v[l],cont = 0;
		for(int a = 0; a < l; a++) scanf("%d",&v[a]);
		for(int a = 0; a < l-1; a++) for(int b = 0; b < l-a-1; b++) if(v[b] > v[b+1]) swap(cont,&v[b],&v[b+1]);
		printf("Optimal train swapping takes %d swaps.\n",cont);
	}
	
	
	return 0;
}
