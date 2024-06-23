#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char d[4] = {'N','L','S','O'};
	int n;
	
	while(scanf("%d",&n), n){
		char c[1000];
		int s = 0;
		scanf("%s",c);
		
		for(int a = 0; a < n; a++){
		
			if(c[a] == 'D') s++;
			else s--;
			
			if(s > 3) s = 0;
			if(s < 0) s = 3;
		}
		
		printf("%c\n",d[s]);
		
	}
	
	
	return 0;
}
