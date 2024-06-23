#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	
	while(scanf("%d %d",&n,&k) != EOF){
		vector<int> v;
		for(int a = 0; a < n; a++){
			int t,t1;
			scanf("%d %d",&t,&t1);
			v.push_back(t-t1);
		}
		sort(v.begin(),v.end(),[](int i, int j) {return i > j;});
		int cont = 0;
		
		for(int a = 0; a < n; a++){
			if(v[a] > 0) cont += 3;
			else if(v[a] == 0 && k >= 1){
				cont += 3;
				k--;
			}else if(v[a] == 0 && k == 0){
				cont++;
			}else if(v[a]*-1+1 <= k){
				cont += 3;
				k -= v[a]*-1+1;
			}else if(v[a]*-1 <= k){
				cont++;
				k -= v[a]*-1;
			}else{
				break;
			}
		}
		
		printf("%d\n",cont);
		
	}
	
	return 0;
}
