#include<stdio.h>

int main(){
	
	int words = 0, cont,cont2;
	char aux[5];
	
	scanf("%d",&words);
	
	for(cont = 0; cont < words; cont++){
		scanf("%s",aux);
		if(strlen(aux)==5)printf("3\n");
		if((aux[1]=='n'&&aux[2]=='e')||(aux[0]=='o'&&aux[1]=='n')||(aux[0]=='o'&&aux[2]=='e'))printf("1\n");
		if((aux[1]=='w'&&aux[2]=='o')||(aux[0]=='t'&&aux[1]=='w')||(aux[0]=='t'&&aux[2]=='o'))printf("2\n");
	}
	return 0;
}
