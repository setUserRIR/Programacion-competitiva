#include<cstdio>

int main(){
	
	int x1,x2,x3,x4;	
	
	while(scanf("%d %d %d %d", &x1, &x2, &x3, &x4), (x1||x2||x3||x4)){
		
		int suma = 120;
		
		suma += ((x1 > x2) ? x1-x2: 40-(x2-x1)) + ((x2 > x3) ? 40-(x2-x3): x3-x2) + ((x3 > x4) ? x3-x4: 40-(x4-x3));
		
		printf("%d\n",suma*9);
	}
		
	return 0;
}
