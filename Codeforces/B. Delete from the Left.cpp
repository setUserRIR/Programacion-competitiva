#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,t;
	int igual = 0,st,tt,a;
	
	cin >> s >> t;
	st = s.size();
	tt = t.size();
	
	for(int a  = 1; a <= min(tt,st); a++){
		if(s[st-a] == t[tt-a])igual++;
		else break;
	}
	
	printf("%d\n",(st-igual)+(tt-igual));
	
	return 0;
}
