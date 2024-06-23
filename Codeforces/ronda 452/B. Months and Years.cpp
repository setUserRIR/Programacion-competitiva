/*#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,total = 0;
	scanf("%d",&n);
	
	for(int a = 0; a < n; a++){
		
	}
	
	
	printf("%d\n",total);
	
	return 0;
}
}*/

#include<bits/stdc++.h>

using namespace std;

int main(){
	
//	string anoNN = "31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31";
//	string anoNB = "31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31";
//	string anoBN = "31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31";
//	int anoNN[24] = {31,28,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
//	int anoNB[24] = {31,28,31,30,31,30,31,31,30,31,30,31, 31,29,31,30,31,30,31,31,30,31,30,31};
//	int anoBN[24] = {31,29,31,30,31,30,31,31,30,31,30,31, 31,28,31,30,31,30,31,31,30,31,30,31};
	
	int n,es = 1,ante = 0,veinti9 = 0,treinta = 0,tre = 0,nueve = 0;
	scanf("%d",&n);
	
	int ano[n];
	
	for(int a = 0; a < n; a++){
		scanf("%d",&ano[a]);
		if(ano[a] == 30 && ante == 30) es = 0;
		if((ano[a] == 28 || ano[a] == 29) && ante != 31 && a > 0) es = 0;
		if((ante == 28 || ante == 29) && ano[a] != 31) es = 0;
		if(ano[a] == 29)veinti9++;
		if(ano[a] == 29)nueve = 1;
		if(veinti9 > 1) es = 0;
		if(ano[a] != 31){
			tre = 0;
			nueve = 0;
		} 
		
		if(ano[a] == 31) tre = 1;
		if(tre) treinta++;
		else treinta = 0;
		if(nueve && treinta > 1) es = 0;
		if(treinta > 2) es = 0;
		
		
		
		ante = ano[a];
	}
	
	if(es)printf("yes\n");
	else printf("no\n");
	
	return 0;
}
