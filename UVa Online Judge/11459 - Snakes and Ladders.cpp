#include<bits/stdc++.h>

using namespace std;

int main(){
	//freopen("out.txt","w",stdout);
	
	int n;
	scanf("%d",&n);
	
	for(int cas = 0; cas < n; cas++){
		int ju,sk,tiros;
		scanf("%d %d %d",&ju,&sk,&tiros);
		int T[100], J[ju];
		memset(T,-1,400);
		memset(J,0,ju*4);
		
		for(int a = 0; a < sk; a++){
			int i,f;
			scanf("%d %d",&i,&f);
			T[i-1] = f-1;
		}
		
		int cont = 0;
		bool flag = false;
		for(int a = 0; a < tiros; a++){
			if(cont >= ju)cont = 0;
			int tiro,s;
			scanf("%d",&tiro);
			if(flag)continue;
			s = J[cont] + tiro;
			
			if(s > 99) J[cont] = 99;
			else{
				if(T[s] == -1) J[cont] = s;
				else J[cont] = T[s];
			}
			if(J[cont] == 99) flag = true;
			cont++;
		}
		for(int a = 0; a < ju; a++) printf("Position of player %d is %d.\n",a+1,J[a]+1);
	}
	
	return 0;
}
