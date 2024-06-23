#include<stdio.h>

int main(){
	
	int caso;
	char word[14];
	
	for(caso = 1; strcmp(word,"#"); caso++){
		scanf("%s",&word);
		if(!strcmp(word,"HELLO")){
			printf("Case %d: ENGLISH\n",caso);
			
		}else if(!strcmp(word,"HOLA")){
			printf("Case %d: SPANISH\n",caso);
			
		}else if(!strcmp(word,"HALLO")){
			printf("Case %d: GERMAN\n",caso);
			
		}else if(!strcmp(word,"BONJOUR")){
			printf("Case %d: FRENCH\n",caso);
			
		}else if(!strcmp(word,"CIAO")){
			printf("Case %d: ITALIAN\n",caso);
			
		}else if(!strcmp(word,"ZDRAVSTVUJTE")){
			printf("Case %d: RUSSIAN\n",caso);
			
		}else if(!strcmp(word,"#")){	
		}else{
			printf("Case %d: UNKNOWN\n",caso);
		}
		
	}
	
	return 0;
}
