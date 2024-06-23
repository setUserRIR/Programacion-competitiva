#include<cstdio>
#include<cmath>

int main(){
	int n,m,suma = 0;
    scanf("%d %d",&n,&m);
    
    for(int a = 0; a < n; a++){
    	int t,l;
        scanf("%d %d",&t,&l);
        suma += l;
    }
    
    printf("%d\n",(int)ceil(suma*1.0/m));
	return 0;
}
