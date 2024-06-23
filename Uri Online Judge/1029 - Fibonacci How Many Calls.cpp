#include<bits/stdc++.h>

using namespace std;

int cont;

int R(int a){
  cont++;
  if(a == 0) return 0;
  if(a == 1) return 1;
  return R(a-1)+R(a-2);
}

int main(){
  
  int n;
  scanf("%d",&n);
  for(int a = 0; a < n; a++){
    int x;
    cont = 0;
    scanf("%d",&x);
    int t = R(x);
    printf("fib(%d) = %d calls = %d\n",x,cont-1,t);
  
  }
  return 0;
}
