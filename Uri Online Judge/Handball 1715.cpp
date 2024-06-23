#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,m,players = 0;
    scanf("%d %d",&n,&m);

    for(int a = 0; a < n; a++){
        int matchs = 0;
        for(int b = 0; b < m; b++){
            int temp;
            scanf("%d",&temp);
            if(temp > 0) matchs++;
        }
        if(matchs == m) players++;
    }

    printf("%d\n",players);

    return 0;
}