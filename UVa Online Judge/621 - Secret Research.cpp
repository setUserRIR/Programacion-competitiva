#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int a = 0; a < n; a++){
		string s;
		cin >> s;
		int t = s.size();
		if(!s.compare("1")||!s.compare("4")||!s.compare("78"))printf("+\n");
		else if(t >= 2 && s[t-1] == '5' && s[t-2] == '3')printf("-\n");
		else if(t >= 2 && s[0] == '9' && s[t-1] == '4') printf("*\n");
		else printf("?\n");
	}
	
	return 0;
}
