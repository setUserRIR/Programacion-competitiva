#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m,b;
	set<int> s;
	scanf("%d %d",&n,&m);
	for(int a = 0; a < m; a++){
		scanf("%d",&b);
		s.insert(b);
	}
	printf("%d\n",n-s.size());
	
	return 0;
}
