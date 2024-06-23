#include<bits/stdc++.h>

using namespace std;

int main(){
	
	//freopen("in.txt","r",stdin);
	
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	set<string> se;
	set<string>::iterator it;
	
	while(cin >> s){
		string st = "";
		
		for(int a = 0; a < s.size(); a++){
			if(isalpha(s[a])) st += tolower(s[a]);
			else{
				se.insert(st);
				st = "";
				
			}
		};
		
		se.insert(st);
	}
	
	for(it = se.begin(), it++; it != se.end(); it++) cout << *it << "\n";

return 0;
}
