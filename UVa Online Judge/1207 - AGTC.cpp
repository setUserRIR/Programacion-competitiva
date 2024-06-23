#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t1,t2;
	while(scanf("%d",&t1) != EOF){
		t1++;
		char p1[t1];
		scanf(" %s %d",p1,&t2);
		t2++;
		char p2[t2];
		scanf(" %s",p2);
		
		int dist[t1][t2];
		
		for(int a = 0; a < t1; a++) dist[a][0] = a;
		for(int a = 0; a < t2; a++) dist[0][a] = a;
		
		for(int a = 1; a < t1; a++){
			for(int b = 1; b < t2; b++){
				dist[a][b] = min(dist[a-1][b]+1, min(dist[a][b-1]+1, dist[a-1][b-1] + (p1[a-1]==p2[b-1]? 0:1)));
			}
		}
		
		printf("%d\n",dist[t1-1][t2-1]);
	}
	
	return 0;
}
