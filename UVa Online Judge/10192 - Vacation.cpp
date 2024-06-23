#include<bits/stdc++.h>

using namespace std;

int main(){
	
	char p1[101], p2[101];
	int cas = 1;
	
	while(gets(p1),p1[0] != '#'){
		gets(p2);
		
		int t1 = strlen(p1), t2 = strlen(p2);
		int mat[t1+1][t2+1];
		
		for(int a = 0; a <= t1; a++) mat[a][0] = 0;
		for(int a = 0; a <= t2; a++) mat[0][a] = 0;
		
		for(int a = 1; a <= t1; a++){
			for(int b = 1; b <= t2; b++){
				if(p1[a-1] == p2[b-1]) mat[a][b] = mat[a-1][b-1] +1;
				else mat[a][b] = max(mat[a-1][b], mat[a][b-1]);
			}
		}
		
		printf("Case #%d: you can visit at most %d cities.\n",cas,mat[t1][t2]);
		cas++;
	}
	
	return 0;
}
