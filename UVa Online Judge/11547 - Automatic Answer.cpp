#include<cstdio>

int main(){
	
	int t;
	
	scanf("%d",&t);
	
	for(int a = 0; a < t; a++){
		int decena, n;
		
	scanf("%d",&n);
	n = (((n*567)/9 + 7492)*235)/47-498;
	
	decena = (n / 10) % 10;
	if(decena < 0) decena *= -1;
	printf("%d\n",decena);
}	

	return 0;
}
