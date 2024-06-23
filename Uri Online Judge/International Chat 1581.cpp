#include<bits/stdc++.h>

int main(){
    int cas;
    scanf("%d",&cas);
    
    for(int a = 0; a < cas; a++){
        int n;
        bool flag = true;
        char s[100], s2[100];
        scanf("%d",&n);
        scanf("%s",s);
        
        for(int b = 1; b < n; b++){
            scanf("%s",s2);
            if(strcmp(s,s2)) flag = false;
        }
        printf("%s\n",(flag?s:"ingles"));

    }

    return 0;
}