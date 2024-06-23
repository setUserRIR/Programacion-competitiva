#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
	
	int T,total=0;
	scanf("%d",&T);
	for(int a = 0; a < T; a++){
		char s[100];
		int temp;
		scanf("%s",&s);
		if(!strcmp(s,"report"))printf("%d\n",total);
		else{
			scanf("%d",&temp);
			total += temp;
		}
	}
	
}

/*string g = "hola 2456 como";
	
	int x = g.find("hola");
	cout << g;
	g.erase(x,x+4);
	cout << atoi(g.c_str());*/
