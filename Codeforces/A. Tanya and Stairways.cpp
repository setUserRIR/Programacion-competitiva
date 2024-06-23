#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,t,s = -1;
	scanf("%d",&n);
	
	vector<int> v;
	
	for(int a = 0; a < n; a++){
		scanf("%d",&t);
		if(t == 1){
			s++;
			v.push_back(1);
			continue;
		}
		v[s]++;
		
	}
	
	printf("%d\n",v.size());
	for(int a = 0; a < v.size(); a++){
		printf("%d ",v[a]);
	}
	printf("\n");
	return 0;
}
