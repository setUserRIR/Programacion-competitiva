#include<bits/stdc++.h>

using namespace std;

int main(){

	
	int t,w,n;
	bool flag = false;
	while(scanf(" %d %d %d",&t,&w,&n) != EOF){
	
		if(flag)printf("\n");
		flag = true;
		int time[n], gold[n], mochila[n+1][t+1];
		for(int a = 0; a < n; a++){
			int tp;
			scanf("%d %d",&tp,&gold[a]);
			time[a] = tp*3*w;
		}
		
		for(int a = 0; a <= n; a++) mochila[a][0] = 0;
		for(int a = 0; a <= t; a++) mochila[0][a] = 0;
		
		for(int a = 1; a <= n; a++){
			for(int b = 1; b <= t; b++){
				if(time[a-1] < b) mochila[a][b] = max(gold[a-1] + mochila[a-1][b-time[a-1]], mochila[a-1][b]);
				else mochila[a][b] = mochila[a-1][b];
			}
		}
		printf("%d\n",mochila[n][t]);
		vector<int> v;
		
		for(int a = n; a > 0 ; a--){
			if(mochila[a][t] == mochila[a-1][t]) continue;
			else{
				v.push_back(a-1);
				t -= time[a-1];
			}
		}
		
		printf("%d\n",v.size());
		for(int a = v.size()-1; a >= 0; a--) printf("%d %d\n",time[v[a]]/(3*w),gold[v[a]]);
		
	}
	
	return 0;
}

