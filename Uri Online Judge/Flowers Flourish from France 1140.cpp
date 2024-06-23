#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	string s;
	
	while(getline(cin,s), s[0] != '*'){
		char x = tolower(s[0]);
		bool es = true;
		int tam = s.size();
		for(int a = 0; a < tam && es; a++){
			if(s[a] == ' '){
				if(tolower(s[a+1]) != x) es = false;
			}else continue;
		}
		if(es) printf("Y\n");
		else printf("N\n");
	}
	
	return 0;
}
