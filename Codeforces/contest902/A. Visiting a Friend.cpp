//Code by RIR
#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, des;
  scanf("%d %d",&n,&des);

  int pads[des+1];
  memset(pads,-1,sizeof(pads));
  
  for(int a = 0; a < n; a++){
    int place,range;
    scanf("%d %d",&place,&range);
    if(pads[place] < range) pads[place] = range;
  }
  
  int rango = pads[0], es = 1;
  for(int a = 0; a <= des && es; a++){
    if(pads[a] > rango) rango = pads[a];
    if(a >= rango) es = 0;
    if(rango >= des)break;  
  }
  if(es)printf("yes\n");
  else printf("no\n");
  
  return 0;
}


