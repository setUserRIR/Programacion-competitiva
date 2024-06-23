#include<bits/stdc++.h>

using namespace std;

int main(){
	
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	int n;
	while(scanf("%d",&n),n){
		int h,r,cont = 0,flag = 0,pflag = 0,p;
		scanf("%d",&r);
		for(int a = 1; a < n; a++){
			scanf("%d",&h);
			if(a == 1){
				p = r;
				if(r > h && flag > -1){
					flag = -1;
					pflag = -1;
					cont++;
				}
				if(r < h && flag < 1){
					flag = 1;
					pflag = 1;
					cont++;
				}
			}else{
				if(r > h && flag > -1){
					flag = -1;
					cont++;
				}
				if(r < h && flag < 1){
					flag = 1;
					cont++;
				}
			}
			
			r = h;
		}
		if(r > p && flag > -1 && pflag > -1) cont++;
		if(r < p && flag < 1 && pflag < 1) cont++;
		
		printf("%d\n",cont);
	}
	
	return 0;
}
