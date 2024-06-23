#include<bits/stdc++.h>

using namespace std;

int main(){
	//freopen("in.txt","r",stdin);
	
	ios::sync_with_stdio(0); cin.tie(0);
	
	map<char,char> mirror;
	
	mirror['A'] = 'A';
	mirror['B'] = 'Q';
	mirror['C'] = 'Q';
	mirror['D'] = 'Q';
	mirror['E'] = '3';
	mirror['F'] = 'Q';
	mirror['G'] = 'Q';
	mirror['H'] = 'H';
	mirror['I'] = 'I';
	mirror['J'] = 'L';
	mirror['K'] = 'Q';
	mirror['L'] = 'J';
	mirror['M'] = 'M';
	mirror['N'] = 'Q';
	mirror['O'] = 'O';
	mirror['P'] = 'Q';
	mirror['Q'] = 'Q';
	mirror['R'] = 'Q';
	mirror['S'] = '2';
	mirror['T'] = 'T';
	mirror['U'] = 'U';
	mirror['V'] = 'V';
	mirror['W'] = 'W';
	mirror['X'] = 'X';
	mirror['Y'] = 'Y';
	mirror['Z'] = '5';
	mirror['1'] = '1';
	mirror['2'] = 'S';
	mirror['3'] = 'E';
	mirror['4'] = 'Q';
	mirror['5'] = 'Z';
	mirror['6'] = 'Q';
	mirror['7'] = 'Q';
	mirror['8'] = '8';
	mirror['9'] = 'Q';
	
	
	string s;
	
	while(cin >> s){
		int tam = s.size();
		bool mir = true, pal = true;
		
		for(int a = 0,b = tam-1; a < tam, b >= 0; a++, b--){
			if(s[a] != s[b]) pal = false;
			if(s[a] != mirror[s[b]]) mir = false;
			if(!mir && !pal) break;
		}
		
		if(mir && pal) cout << s << " -- is a mirrored palindrome.\n\n";
		if(mir && !pal) cout << s << " -- is a mirrored string.\n\n";
		if(!mir && pal) cout << s << " -- is a regular palindrome.\n\n";
		if(!mir && !pal) cout << s << " -- is not a palindrome.\n\n";
	}
	
	
	return 0;
}
