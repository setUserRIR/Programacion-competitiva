#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d",&n);
	
	for(int a = 0; a < n; a++){
		char s[22000], *spli;
		scanf(" %[^\n]s",s);
		set<string> st;
		
		spli = strtok(s," ");
		while(spli != NULL){
			st.insert(string(spli));
			spli = strtok(NULL," ");
		}
		
		bool p = false;
		
		for(set<string>::iterator it = st.begin(); it != st.end(); it++){
			cout << (p ? " ": "") << *it;
			p = true;
		}
		printf("\n");
	}
		
	return 0;
}
