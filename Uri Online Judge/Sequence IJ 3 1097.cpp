#include<bits/stdc++.h>

using namespace std;

int main(){

	int i = 1, j = 7;

	while(i <= 9 || j <= 15){
		printf("I=%d J=%d\n",i,j);
		j--;
		printf("I=%d J=%d\n",i,j);
		j--;
		printf("I=%d J=%d\n",i,j);
		i+=2; j+=4;
	}

	return 0;
}
