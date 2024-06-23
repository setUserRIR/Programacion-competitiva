#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,ans, pos,neg;
	bool flag = false;
	while(scanf("%d",&n) != EOF, n != -999999){
		ans = n;
		pos = max(n,1);
		neg = min(n,1);
		while(scanf("%d",&n), n != -999999){
			if(n > 0){
				pos *= n;
				neg = min(1,neg*n);
			}else if(n == 0){
				flag = true;
				pos = 1;
				neg = 1;
			}else{
				int tp = pos;
				pos = max(1, neg*n);
				neg = tp*n;
			}
			
			if(ans < pos) ans = pos;
		}
		printf("%d\n",ans==1&&flag ? 0:ans);
	}
}
