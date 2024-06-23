#include<string>
#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	freopen("entrada.in","r",stdin);
	freopen("salida.out","w",stdout);
	int n;
	scanf("%d",&n);

	for(int cas = 0; cas < n; cas++){
		bool es = true;
		string s,st;
		cin >> s;
		st = s;
		reverse(st.begin(),st.end());
		
		int tam = s.size();
		if(!s.compare("")){
			if(tam % 2 == 0){
			for(int a = 0; a < tam/2 && es; a++)
				if(s[a] != st[a] && s[a] != '(' && s[a] != ')' && s[a] != '[' && s[a] != ']') es = false;
			
			}else es = false;
		}
		
		
		if(es) printf("Yes\n");
		else printf("No\n");
	}
	
	return 0;
}
