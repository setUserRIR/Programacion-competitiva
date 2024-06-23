#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,m,z;	
	scanf("%d %d %d",&n,&m,&z);


	int killed = 0;
	
	for(int a = 1; a <= z; a++){
		if(a%n == 0 && a%m == 0){
			killed ++;
		}
	}
	
	printf("%d\n",killed);
	
	return 0;
}
