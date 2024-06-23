#include<bits/stdc++.h>

int main(){

    int t;
    scanf("%d",&t);

    for(int a = 1; a <= t; a++){
        char s[120],s1[120] = "";
        scanf("%s",s);
        int tam = strlen(s), flag = false;

        for(int b = 0; b < tam; b++){
            if(s[b] == '4'){
                s[b] = '3';
                strcat(s1,"1");
                flag = true;
            }else if(flag){
                strcat(s1,"0");
            }

            if(b == tam-1)printf("Case #%d: %s %s\n",a,s,s1);
        }

    }

   return 0; 
}