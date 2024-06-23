#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;


int main(){
	int n;
	
	while(scanf("%d",&n) == 1){
		int secuencia[n];
		
		for(int a = 0; a < n; a++){
			scanf("%d",&secuencia[a]);
		}
		
		if(n == 1){
			printf("1\n");
		}else{
			int d = secuencia[1] - secuencia[0], i = 0,ind = 1;
			
			while(i < n-1){
				int tmp = secuencia[i+1] - secuencia[i];
				if(tmp != d){
					d = tmp;
					ind = i+1;
				}
				i++;
			}
			printf("%d\n",ind);
		}
		
	}
	return 0;
}
