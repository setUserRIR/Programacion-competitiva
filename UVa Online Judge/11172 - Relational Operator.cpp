#include<stdio.h>

int main(){
	int t, a, b, cont = 0;
		
		scanf("%i",&t);
		
		for(cont = 0; cont < t; cont++){
			scanf("%i %i",&a,&b);
			if(a>b){
				printf(">\n");
			}else if(a<b){
				printf("<\n");
			}else{
				printf("=\n");
			}
		}
	
	return 0;
}
