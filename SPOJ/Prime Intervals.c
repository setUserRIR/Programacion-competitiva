#include<stdio.h>
#include<math.h>

int main(){

    int n;
    long long int x,y;
    scanf("%d",&n);

    for(int a = 0; a < n; a++){
        scanf("%lld %lld",&x,&y);
        for(int b = x; b <= y; b++){
            if(b == 1) continue;
            int flag = 1;
            for(int c = 2; c <= sqrt(b) && flag; c++) if(b%c == 0) flag = 0;
            if(flag) printf("%d\n",b);
        }
    }

    return 0;
}