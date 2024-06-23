#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char p1[100], p2[100];
	
	while(gets(p1)){
		gets(p2);
		int t1 = strlen(p1), t2 = strlen(p2),total = 0;
		int mat[t1+1][t2+1];
		
		for(int a = 0; a <= t1; a++) mat[a][0] = 0;
		for(int a = 0; a <= t2; a++) mat[0][a] = 0;
		
		for(int a = 1; a <= t1; a++){
			for(int b = 1; b <= t2; b++){
				if(p1[a-1] == p2[b-1]){
					mat[a][b] = mat[a-1][b-1] +1;
					total = max(total,mat[a][b]);
				}else mat[a][b] = 0;
			}
		}
		printf("%d\n",total);
	}
	
	return 0;
}
