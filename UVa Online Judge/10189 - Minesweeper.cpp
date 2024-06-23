#include<bits/stdc++.h>

using namespace std;

int main(){
	
int n,m,cas=1;
int x[8] = {-1,-1,0, 1, 1, 1, 0,-1};
int y[8] = { 0, 1,1, 1, 0,-1,-1,-1};
while(scanf("%d %d",&n,&m),m||n){
  int mapa[n][m];
  for(int a = 0; a < n; a++){
    for(int b = 0; b < m; b++){
      mapa[a][b] = 0;
    }
  }
  
  char s[m];
  
  for(int a = 0; a < n; a++){
    scanf("%s",s);
    for(int b = 0; b < m; b++){
      if(s[b] == '*'){
        mapa[a][b] = -1;
        for(int i = 0; i < 8; i++){
          int ay = a+y[i],bx = b+x[i];
          if(bx<0||bx>=m||ay<0||ay>=n){
            continue;
          }else if(mapa[ay][bx] != -1)mapa[ay][bx]++;
        }
      }
    }
  }
  if(cas > 1)printf("\n");
  printf("Field #%d:\n",cas);
  for(int a = 0; a < n; a++){
    for(int b = 0; b < m; b++){
      if(mapa[a][b] == -1)printf("*");
      else printf("%d",mapa[a][b]);
    }
    printf("\n");
  }
  cas++;
}

return 0;
}
