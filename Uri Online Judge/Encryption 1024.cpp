#include<bits/stdc++.h>

using namespace std;

bool sr(string a, string b){
	return a.size() > b.size();
}

int main(){
	//ios::sync_with_stdio(0); cin.tie(0);

	int n;
	scanf("%d",&n);
	
	char s[1100], *spli;
	
	for(int ca = 0; ca < n; ca++){
		scanf(" %[^\n]s",s);
		int tam = strlen(s);
		for(int a = 0; a < tam; a++) if(isalpha(s[a])) s[a] += 3;
		reverse(s,s+tam);
		for(int a = tam/2; a < tam; a++) s[a] -= 1;
		
		printf("%s\n",s);
	}

	
	return 0;
}
