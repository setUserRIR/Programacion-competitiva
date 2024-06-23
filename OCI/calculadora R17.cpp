#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,t,seis = 0;
	scanf("%d",&n);
	int v[n], vr[n], dr[] = {0,1,2,3,4,5,9,7,8,6};
	
	bool es = true;
	
	for(int a = 0; a < n && es; a++){
		scanf("%d",&t);
		
		if(t == 3 || t == 4 || t == 7){
			es = false;
			break;
		}
		
		if(t == 6) seis++;
		if(t == 9) seis--;
		
		v[a] = t;
		vr[n-1-a] = t;
		
	}
	
	if(seis != 0) es = false;
	
	for(int a = 0; a < n && es; a++){
		if(v[a] != dr[vr[a]]){
			es = false;
			break;
		}
	}
	
	if(es) printf("Mauricio\n");
	else printf("Camilo\n");
	
	return 0;
}
