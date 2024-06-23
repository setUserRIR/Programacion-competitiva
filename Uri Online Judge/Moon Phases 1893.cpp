#include<bits/stdc++.h>

using namespace std;

int main(){

    int v1,v2;
    scanf("%d %d",&v1,&v2);

    if(v2 >= 0 && v2 <= 2) printf("nova\n");
    else if(v2 >= 3 && v2 <= 96 && v1 < v2) printf("crescente\n");
    else if(v2 >= 97 && v2 <= 100) printf("cheia\n");
    else printf("minguante\n");
    
    return 0;
}