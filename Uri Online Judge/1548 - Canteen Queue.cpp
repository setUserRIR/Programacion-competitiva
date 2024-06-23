#include<bits/stdc++.h>

using namespace std;
int cont;

bool sr(int a, int b){
  //cont++;
  return a > b;
}

int main(){
  
  int n;
  scanf("%d",&n);
  for(int a = 0; a < n; a++){
    int x;
    cont = 0;
    scanf("%d",&x);
    int v[x],v2[x];
    for(int b = 0; b < x; b++){
      int t;
      scanf("%d",&t);
      v[b]=t;
      v2[b] = t;
    }
    sort(v,v+x,sr);
    for(int b = 0; b < x; b++) if(v[b] == v2[b]) cont++;
    printf("%d\n",cont);
  
  }
  return 0;
}
