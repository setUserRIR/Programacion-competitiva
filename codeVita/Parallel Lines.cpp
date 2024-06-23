#include<bits/stdc++.h>

using namespace std;


int main(){
	
	string s1,s2;
	
	cin >> s1 >> s2;
	
	unordered_map<int,int> v;
	
	for(int a = 0; a < s1.size(); a++){
		for(int b = 0; b < s2.size(); b++){
			if(s1[a] == s2[b]) v[b-a] += 1;
		}
	}
	
	int sum = 0;
	
	for(auto it = v.begin(); it != v.end(); ++it){
		int tem = it->second;
		//if(tem <= 1) continue;
		sum += (tem*(tem-1))/2;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
