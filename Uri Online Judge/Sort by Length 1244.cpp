#include<bits/stdc++.h>

using namespace std;

bool sr(string a, string b){
	return a.size() > b.size();
}

int main(){
	//ios::sync_with_stdio(0); cin.tie(0);

	int n;
	scanf("%d",&n);
	
	char s[3000], *spli;
	
	for(int a = 0; a < n; a++){
		scanf(" %[^\n]s",s);
		//printf("%s",s);
		vector<string> v;
		spli = strtok(s," ");
		while(spli != NULL){
			v.push_back(string(spli));
			spli = strtok(NULL," ");
		}
		
		stable_sort(v.begin(),v.end(),sr);
		
		cout << v[0];
		for(int a = 1; a < v.size(); a++){
			cout << " " <<v[a];
		}
		printf("\n");
	}

	
	return 0;
}
