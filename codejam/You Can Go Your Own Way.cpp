#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    for(int cas = 1; cas <= t; cas++){
        int n;
        scanf("%d",&n);
        char s[200000];
        
        scanf("%s",s);
        int tam = strlen(s);
        for(int a = 0; a < tam; a++){
            if(s[a] == 'E') s[a] = 'S';
            else s[a] = 'E';
        }
        printf("Case #%d: %s\n",cas,s);
    }

    return 0;
}