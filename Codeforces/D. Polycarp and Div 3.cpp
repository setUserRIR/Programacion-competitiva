#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = 0;
	
	for(int a = 0; a < s.size(); a++){
		for(int b = a; b < s.size(); b++){
			if(b-a > 8)break;
			if(stoi(s.substr(a,b-a+1))%3 == 0){
				n++;
				a = b+1;
			}
			//if(b == s.size()-1) a = b+1;
		}
	}
	
	printf("%d\n",n);
	
	return 0;
}
