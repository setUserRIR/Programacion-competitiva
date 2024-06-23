#include<bits/stdc++.h>

using namespace std;

int main(){

	string s;

	while(cin >> s){
		int p = 0;
		bool flag = false;
		for(int a = 0; a < s.size(); a++){
			if(s[a] == '('){
				p++;
				flag = true;
			}
			if(s[a] == ')'){
				p--;
				flag = false;
			}
		}

		if(p || flag) printf("incorrect\n");
		else printf("correct\n");
	}

	return 0;
}
