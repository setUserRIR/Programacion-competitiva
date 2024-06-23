#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,t,c = 0,ct;
	vector<int> v;
	scanf("%d",&n);
	for(int a = 0; a < n; a++){
		scanf("%d",&t);
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	ct = v[0];
	for(int a = 0; a < v.size(); a++){
		if(v[a] == ct) c++;
		else{
			printf("%d aparece %d vez(es)\n",ct,c);
			ct = v[a];
			c = 1;
		}
	}printf("%d aparece %d vez(es)\n",ct,c);
	
	return 0;
}
