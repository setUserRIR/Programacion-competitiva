#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	for(int a = 0; a < t; a++){
		int n,sum=0,min=200,max=0;
		scanf("%d",&n);
		for(int b = 0; b < n; b++){
			int aux;
			scanf("%d",&aux);
			sum+=aux;
			if(aux > max)max = aux;
			if(aux < min) min = aux;
		}
		sum/=n;
		min = abs(sum-min)*2;
		max = abs(sum-max)*2;
		sum = min+max;
		printf("%d\n",sum);
	}
	
	
	return 0;
}
