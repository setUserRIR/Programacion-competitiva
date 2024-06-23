#include<bits/stdc++.h>

using namespace std;

void printsort(int a, int b, int c){
	if(a >= b && b >= c) printf("%d %d %d\n",c,b,a);
	else if(a >= c && c >= b) printf("%d %d %d\n",b,c,a);
	else if(b >= a && a >= c) printf("%d %d %d\n",c,a,b);
	else if(b >= c && c >= a) printf("%d %d %d\n",a,c,b);
	else if(c >= a && a >= b) printf("%d %d %d\n",b,a,c);
	else printf("%d %d %d\n",a,b,c);
}

int main(){
	//freopen("out.txt","w",stdout);
	
	int x,y,z;
	while(scanf("%d %d %d",&x,&y,&z), x || y || z){
		if(x == y && x == z){ //triples
			if(x == 13) printf("*\n");
			else printf("%d %d %d\n",x+1,x+1,x+1);
		}else if(x == y && x != z){ //par
			if(x == 13){ //par de 13
				if(z == 12)printf("1 1 1\n");
				else printf("%d 13 13\n",z+1);
			}else{ //par cualquiera
				if(z == 13) printf("1 %d %d\n",x+1,x+1);
				else if(z+1 == x) printsort(z+2,x,x);
				else printsort(z+1,x,x);
			}
		}else if(x == z && x != y){ //par
			if(x == 13){ //par de 13
				if(y == 12)printf("1 1 1\n");
				else printf("%d 13 13\n",y+1);
			}else{ //par cualquiera
				if(y == 13) printf("1 %d %d\n",x+1,x+1);
				else if(y+1 == x) printsort(y+2,x,x);
				else printsort(y+1,x,x);
			}
		}else if(z == y && z != x){ //par
			if(z == 13){ //par de 13
				if(x == 12)printf("1 1 1\n");
				else printf("%d 13 13\n",x+1);
			}else{ //par cualquiera
				if(x == 13) printf("1 %d %d\n",z+1,z+1);
				else if(x+1 == z) printsort(x+2,z,z);
				else printsort(x+1,z,z);
			}
		}else printf("1 1 2\n");
	}
	
	return 0;
}
