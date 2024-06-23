//code by RIR
#include<bits/stdc++.h>

#define INF 1e9+7

using namespace std;

int main(){
	int n,min1 = INF,pos1 = INF,pos2 = INF,posfinal = INF;
	scanf("%d",&n);
	for(int a = 0; a < n; a++){
		int tem;
		scanf("%d",&tem);
		if(tem == min1){
			pos2 = a;
			if(posfinal > abs(pos1-pos2))posfinal = abs(pos1-pos2);
			pos1 = pos2;
		}
		if(tem < min1){
			pos1 = a;
			min1 = tem;
			posfinal = INF;	
		}
	}
	printf("%d\n",posfinal);
	
	return 0;
}
