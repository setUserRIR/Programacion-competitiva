#include<bits/stdc++.h>

int magia(int x,int y){
    if(x != y && x != y+2) return -1;

    //int tx = (x % 2 ? x+(x/2-1)*2+1: x+(x/2-1)*2);
    int ty = (y % 2 ? y*2-1: y*2);

    if(x == y) return ty;
    else return ty+2;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int a = 0; a < n; a++){
        int x,y,z;
        scanf("%d %d",&x,&y);
        z = magia(x,y);
        if(z == -1) printf("No Number\n");
        else printf("%d\n",z);
    }

    return 0;
}