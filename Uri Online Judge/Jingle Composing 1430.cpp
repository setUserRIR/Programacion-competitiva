#include<bits/stdc++.h>

using namespace std;

int main(){
	//ios::sync_with_stdio(0); cin.tie(0);
	
	map<char,int> m;
	m['W'] = 64;
	m['H'] = 32;
	m['Q'] = 16;
	m['E'] = 8;
	m['S'] = 4;
	m['T'] = 2;
	m['X'] = 1;
	
	string s;
	
	while(getline(cin,s), s[0] != '*'){
		//cout << s;
		int tam = s.size(),cont = 0,rcont = 0;
		for(int a = 1; a < tam; a++){
			if(s[a] == '/'){
				if(cont == 64) rcont++;
				cont = 0;
			}else{
				cont += m[s[a]];
				//printf("%c = %d\n",s[a],cont);
			}
		}
		printf("%d\n",rcont);
	}
	
	return 0;
}
