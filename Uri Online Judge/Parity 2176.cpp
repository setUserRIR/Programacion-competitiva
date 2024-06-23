#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	int cont = 0;
	string s;
	cin >> s;
	for(int a = 0; a < s.size(); a++) if(s[a] == '1') cont++;
	cout << s + ((cont%2 == 0) ? "0\n" : "1\n");
	
	return 0;
}
