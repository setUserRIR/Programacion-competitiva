#include<bits/stdc++.h>

int main(){

    int n,cont = 0,saltos = 0;
    char an;
    scanf("%d",&n);
    bool flag = true;

    for(int a = 0; a < n; a++){
        char t,s[10];
        scanf(" %c%s",&t,s);
        if(a > 0){
            
            if(t == '.') cont++;
            else{
                cont = 0; 
                if(an == '.') saltos++;
            }
            if(cont > 2) flag = false;
            if(a == n-1 && t == '.') saltos++;
        }
        an = t;
    }

    if(flag) printf("%d\n",saltos);
    else printf("N\n");

    return 0;
}