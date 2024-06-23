#include<bits/stdc++.h>

int main(){
    int p,n,pre;
    bool flag = true;
    scanf("%d %d",&p,&n);

    for(int a = 0; a < n && flag; a++){
        int t;
        scanf("%d",&t);
        if(a > 0) if(abs(pre-t) > p) flag = false;
        pre = t;
    }

    printf("%s\n",(flag?"YOU WIN":"GAME OVER"));

    return 0;
}