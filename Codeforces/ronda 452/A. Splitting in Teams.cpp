#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,uno = 0,dos = 0,total = 0;
	scanf("%d",&n);
	
	for(int a = 0; a < n; a++){
		int x;
		scanf("%d",&x);
		if(x == 1) uno++;
		else dos++;
		
		if(uno > 0 && dos > 0){
			dos--;
			uno--;
			total++;
		}
	}
	total += uno/3;
	
	printf("%d\n",total);
	
	return 0;
}
