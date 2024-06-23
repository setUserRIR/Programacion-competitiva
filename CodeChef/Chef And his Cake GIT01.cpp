#include<bits/stdc++.h>

using namespace std;

char RG[2] = {'R','G'}, GR[2] = {'G','R'};

int main(){
	int t;
	scanf("%d",&t);
	for(int cas = 0; cas < t; cas++){
		int n,m,total1=0,total2=0;
		scanf("%d %d",&n,&m);
		vector<string> vs;
		vs.assign(n,string());
		for(int a = 0; a < n; a++) cin >> vs[a];
		
		for(int d = 0; d < 2; d++){
			if(d == 0){
				for(int a = 0; a < n; a++){
					for(int b = 0; b < m; b++){
						if(a%2 == 0){
							if(b%2 == 0){
								if(vs[a][b] != RG[0]) total1 += 3;
							}else{
								if(vs[a][b] != RG[1]) total1 += 5;
							}
						}else{
							if(b%2 == 0){
								if(vs[a][b] != GR[0]) total1 += 5;
							}else{
								if(vs[a][b] != GR[1]) total1 += 3;
							}
						}
					}
				}
			}else{
				for(int a = 0; a < n; a++){
					if(total2 > total1)break;
					for(int b = 0; b < m; b++){
						if(a%2 == 0){
							if(b%2 == 0){
								if(vs[a][b] != GR[0]) total2 += 5;
							}else{
								if(vs[a][b] != GR[1]) total2 += 3;
							}
						}else{
							if(b%2 == 0){
								if(vs[a][b] != RG[0]) total2 += 3;
							}else{
								if(vs[a][b] != RG[1]) total2 += 5;
							}
						}
					}
					if(total2 > total1)break;
				}
			}
		}
		if(total1 < total2)printf("%d\n",total1);
		else printf("%d\n",total2);
	}
	return 0;
}
