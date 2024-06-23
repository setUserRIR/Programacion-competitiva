#include<stdio.h>

int main(){
	
	int T = 0, cont = 1, em1, em2,em3,a;
	
	scanf("%d",&T);
	for(a = 0; a < T; a++){
		scanf("%d %d %d",&em1,&em2,&em3);
		if(em1>em2){
			if(em1>em3){
				if(em2>em3){
					printf("Case %d: %d\n",cont,em2);
				}else{
					printf("Case %d: %d\n",cont,em3);
				}
			}else{
				printf("Case %d: %d\n",cont,em1);
			}
		}else{
			if(em1<em3){
				if(em2<em3){
					printf("Case %d: %d\n",cont,em2);
				}else{
					printf("Case %d: %d\n",cont,em3);
				}
			}else{
				printf("Case %d: %d\n",cont,em1);
			}
		}
		cont++;
	}
	
}
