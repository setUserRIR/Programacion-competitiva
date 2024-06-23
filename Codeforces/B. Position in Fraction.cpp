#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c,save;
	scanf("%d %d %d",&a,&b,&c);
	
	a %= b;
	
	for(int j = 1; j <= 1e5; j++){
		a *= 10;
		if((int)a/b == c){
			printf("%d",j);
			return 0;
		}
		
		a %= b;
		
	}
	printf("-1\n");
	
	return 0;
}
