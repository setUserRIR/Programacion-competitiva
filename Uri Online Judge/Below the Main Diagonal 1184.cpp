#include<bits/stdc++.h>
#define INF 1e9+7

using namespace std;


int main(){
	char s;
	scanf("%c",&s);
	float n,suma = 0.0;
	for(int a = 0; a < 12; a++){
		for(int b = 0; b < 12; b++){
			scanf("%f",&n);
			if(b < a) suma += n;
		}
	}
	
	if(s == 'S')printf("%.1f\n",suma);
	else printf("%.1f\n",suma/66.0);
	
	return 0;
}
