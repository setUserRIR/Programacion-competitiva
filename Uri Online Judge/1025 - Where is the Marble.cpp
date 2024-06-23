#include<bits/stdc++.h>

using namespace std;

int main(){
  
  
  int n,k,cas = 0;
  while(scanf("%d %d",&n,&k), n || k){
    cas++;
    printf("CASE# %d:\n",cas);
    vector<int> v;
    v.assign(n,0);
    vector<int>::iterator pos;
    int q;
    for(int a = 0; a < n; a++) scanf("%d",&v[a]);
    sort(v.begin(),v.end());
    for(int a = 0; a < k; a++){
      scanf("%d",&q);
      pos = lower_bound(v.begin(),v.end(),q);
      
      int ind = pos-v.begin();
      
      if(ind < n && v[ind] == q) printf("%d found at %d\n",q,ind+1);
      else printf("%d not found\n",q);
      
    }
      
  }
  
  
  
  
  return 0;
}
