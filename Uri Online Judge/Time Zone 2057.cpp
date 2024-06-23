#include<bits/stdc++.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",((a==0?24:a)+b+c)%24);

    return 0;
}