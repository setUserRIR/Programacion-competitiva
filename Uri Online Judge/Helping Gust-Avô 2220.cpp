#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int cas = 0; cas < n; cas++){
		vector<vector<int>> v(26,vector<int>());
		vector<int> vs;
		int cont = 0;
		char c;
		getchar();
		while(scanf("%c",&c), c != '\n'){
			v[int(c)-97].push_back(cont);
			cont++;
		}
		getchar();
		while(scanf("%c",&c), c != '\n') vs.push_back(int(c)-97);
		
		
		
	}
	
	return 0;
}
