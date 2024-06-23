#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int cas = 0; cas < n; cas++){
		string s;
		getline(cin,s);
		int m = 0, f = 0;
		for(int a = 0; a < s.size(); a++){
			if(s[a] == 'M')m++;
			if(s[a] == 'F')f++;
		}
		if(f == m && f != 1)printf("LOOP\n");
		else printf("NO LOOP\n");
	}
	
	return 0;
}
