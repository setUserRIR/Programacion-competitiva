#include<bits/stdc++.h>

using namespace std;

int main(){
	
	float val[5] = {4.00,4.50,5.00,2.00,1.50};
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Total: R$ %.2f\n",val[a-1]*b);
	
	return 0;
}
