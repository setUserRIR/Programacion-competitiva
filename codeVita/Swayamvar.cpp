#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	string s1,s2;
	
	cin >> n >> s1 >> s2;
	
	int m = 0, r = 0;;
	
	for(int a = 0; a < n; a++){
		if(s2[a] == 'r') r++;
		else m++;
	}
	
	int x = 0;
	
	for(int a = 0; a < n; a++){
		if(s1[a] == 'r') r--;
		else m--;
		
		if(r < 0 || m < 0){
			break;
		}
		x++;
	}
	
	
	printf("%d",n-x);
	
	return 0;
}
