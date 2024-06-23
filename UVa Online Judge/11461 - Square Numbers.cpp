#include<bits/stdc++.h>

int main(){
	int n,m;
	while(scanf("%d %d",&n,&m), n || m){
		int cont = 0;
		for(int a = n; a <= m; a++){
			float raiz = sqrt(a);
			if(raiz == (int)raiz)cont++;
		}
		printf("%d\n",cont);
	}

	return 0;
}
