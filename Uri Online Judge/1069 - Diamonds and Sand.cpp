#include<bits/stdc++.h>

using namespace std;

int main(){
  
  
  int n;
  scanf("%d",&n);
  for(int a = 0; a < n; a++){
    char s[1200];
    scanf(" %[^\n]s",s);
    int tam = strlen(s),cont = 0;
    stack<bool> st;
    
    for(int b = 0; b < tam; b++){
      if(s[b] == '<'){
        st.push(1);
      }
      else if(s[b] == '>'){
        if(!st.empty()){
          st.pop();
          cont++;
        }
        
      }
    }
    printf("%d\n",cont);
  }
  
  
  return 0;
}
