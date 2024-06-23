#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	//freopen("in.txt","r",stdin);
	
	int n;
	cin >> n;
	
	for(int cas = 0; cas < n; cas++){
		
		map<char,int> m;
		int k;
		cin >> k;
		for(int a = 0; a < k; a++){
			int tn;
			char t;
			cin >> t >> tn;
			m[t] = tn;
		}
		
		cin >> k;
		//cout << k;
		string s;
		int cost = 0;
		for(int a = 0; a <= k; a++){
			getline(cin,s);
			//cout << s;
			for(int b = 0; b < s.size(); b++){
				cost += m[s[b]];
			}
		}
		
		
		printf("%.2f$\n",cost/100.0);
		
	}	
	
	
	return 0;
}
