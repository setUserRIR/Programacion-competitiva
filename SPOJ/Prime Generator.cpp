#include<bits/stdc++.h>

int main(){

    int n,x,y;
    scanf("%d",&n);

    for(int a = 0; a < n; a++){
        scanf("%d %d",&x,&y);
        for(int b = x; b <= y; b++){
            if(b == 1) continue;
            int flag = true;
            for(int c = 2; c <= sqrt(b) && flag; c++) if(b%c == 0) flag = false;
            if(flag) printf("%d\n",b);
        }
    }

    return 0;
}