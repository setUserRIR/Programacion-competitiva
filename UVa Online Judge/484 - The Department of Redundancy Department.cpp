#include<bits/stdc++.h>

using namespace std;

int main(){
	
	//freopen("in.txt","r",stdin);
	
	int n;
	vector<int> v;
	map<int,int> m;
	//map<int,int>::iterator it;
	
	while(scanf("%d",&n) != EOF){
		if(m[n] == 0) v.push_back(n);
		m[n]++;
	}
	//for(it = m.begin(); it != m.end(); it++) printf("%d %d\n",it->first, it->second);
	for(int a = 0; a < v.size(); a++) printf("%d %d\n", v[a], m[v[a]]);
		
	return 0;
}
