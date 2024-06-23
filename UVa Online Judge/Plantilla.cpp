//Code by RIR
#include<bits/stdc++.h>

using namespace std;

#define INF 1e9+7


int main(){
	
	long long int d,a=0;
	int w;
	scanf("%lld %d",&d,&w);
	
	if(w == 6){
		w = 1;
		a+=2;
	}
	if(w == 7){
		w = 1;
		a++;
	}
	
	for(; d > 0; a++, w++){
		if(w < 5 || w > 6) --d;
		if(w >= 7) w = 1;
	}
	
	printf("%lld",a);
	
	return 0;
}


