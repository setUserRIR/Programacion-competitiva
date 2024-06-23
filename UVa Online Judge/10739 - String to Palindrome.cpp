# include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	
	for(int cas = 1; cas <= n; cas++){
		
		string p1;
		cin >> p1;
		
		string p2(p1);
		
		reverse(p2.begin(),p2.end());
		
		int t1 = p1.size()+1, t2 = p2.size()+1;
		
		int dist[t1][t2];
		
		for(int a = 0; a < t1; a++) dist[a][0] = a;
		for(int a = 0; a < t2; a++) dist[0][a] = a;
		
		for(int a = 1; a < t1; a++){
			for(int b = 1; b < t2; b++){
				dist[a][b] = min(dist[a-1][b]+1, min(dist[a][b-1]+1, dist[a-1][b-1] + (p1[a-1]==p2[b-1] ? 0:1)));
			}
		}
		
		printf("Case %d: %d\n",cas,dist[t1-1][t2-1]/2);
		
	}
	
	return 0;
}
