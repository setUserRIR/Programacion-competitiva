#include<bits/stdc++.h>

using namespace std;

int main(){

    int d,v1,v2;

    while(scanf("%d %d %d",&d,&v1,&v2) != EOF){
        if(d >= 12 || v1==v2){
            printf("N\n");
            continue;
        }

        int df = d*v2/abs(v1-v2);
        if(df >= 12) printf("N\n");
        else printf("S\n");
    }
    
}