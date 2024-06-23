#include<bits/stdc++.h>

using namespace std;

int main(){
  
  string pi = "pedra", pa = "papel", ti = "tesoura", la = "lagarto",s = "Spock";
  
  int n;
  scanf("%d",&n);
  for(int a = 1; a <= n; a++){
    //char sh[20], rj[20];
    //scanf(" %s %s",sh,rj);
    string sh,rj;
    cin >> sh >> rj;
    
    if(!sh.compare(pi)){
      if(!rj.compare(la) || !rj.compare(ti)) printf("Caso #%d: Bazinga!\n",a);
      else if(!rj.compare(pa) || !rj.compare(s))printf("Caso #%d: Raj trapaceou!\n",a);
      else printf("Caso #%d: De novo!\n",a);
      
    }else if(!sh.compare(pa)){
      if(!rj.compare(pi) || !rj.compare(s)) printf("Caso #%d: Bazinga!\n",a);
      else if(!rj.compare(ti) || !rj.compare(la))printf("Caso #%d: Raj trapaceou!\n",a);
      else printf("Caso #%d: De novo!\n",a);
      
    }else if(!sh.compare(ti)){
      if(!rj.compare(pa) || !rj.compare(la)) printf("Caso #%d: Bazinga!\n",a);
      else if(!rj.compare(pi) || !rj.compare(s))printf("Caso #%d: Raj trapaceou!\n",a);
      else printf("Caso #%d: De novo!\n",a);
      
    }else if(!sh.compare(la)){
      if(!rj.compare(s) || !rj.compare(pa)) printf("Caso #%d: Bazinga!\n",a);
      else if(!rj.compare(pi) || !rj.compare(ti))printf("Caso #%d: Raj trapaceou!\n",a);
      else printf("Caso #%d: De novo!\n",a);
      
    }else if(!sh.compare(s)){
      if(!rj.compare(pi) || !rj.compare(ti)) printf("Caso #%d: Bazinga!\n",a);
      else if(!rj.compare(la) || !rj.compare(pa))printf("Caso #%d: Raj trapaceou!\n",a);
      else printf("Caso #%d: De novo!\n",a);
    }
    
  }
  
  
  return 0;
}
