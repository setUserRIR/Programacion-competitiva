#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	while(scanf("%d",&n),n){
		int ans = INT_MIN, sum = 0, t;
		for(int a = 0; a < n; a++){
			scanf("%d",&t);
			
			sum += t;
			ans = max(ans,sum);
			if(sum < 0) sum = 0;
		}
		if(ans <= 0) printf("Losing streak.\n");
		else printf("The maximum winning streak is %d.\n",ans);
	}
		
	return 0;
}
