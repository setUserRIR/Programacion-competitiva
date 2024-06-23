#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){
	
	int n, c;
	scanf("%d %d", &n,&c);
	
	int i = 0, k = n-1, arr[n], parejas = 0;
	
	for(int a = 0; a < n; a++) scanf("%d",&arr[a]);
	sort(arr,arr+n);
	
	while(i < k){
		if(arr[i] + arr[k] <= c){
			i++;
			k--;
			parejas++;
			
		}else{
			k--;
		}
	}
	
	printf("%d\n", parejas+(n - parejas*2));
	
	
	return 0;
}
