//code by RIR
#include<bits/stdc++.h>

#define INF 1e9+7

using namespace std;

int main(){
	char s[52];
	scanf("%s",s);
	int cont = 0;
	
	for(int a = 0; a < strlen(s); a++){
		if(s[a] == '1' || s[a] == '3' || s[a] == '5' || s[a] == '7' || s[a] == '9' || s[a] == 'a' || s[a] == 'e' || s[a] == 'i' || s[a] == 'o' || s[a] == 'u')cont++;
	}
	printf("%d\n",cont);
	
	return 0;
}
