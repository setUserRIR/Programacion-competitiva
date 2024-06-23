#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b;
	scanf("%d",&n);
	for(int c = 0; c < n; c++){
		scanf("%d %d",&a,&b);
		int an = log10(a)+1, bn = log10(b)+1;
		if(an < bn) printf("nao encaixa\n");
		else if(a == b) printf("encaixa\n");
		else if(an > bn){
			if(a%int(pow(10,bn))==b) printf("encaixa\n");
			else printf("nao encaixa\n");
		}else printf("nao encaixa\n");
	}
	
	return 0;
}
