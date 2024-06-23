#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	scanf("%d",&t);
	
	for(int a = 1; a <= t; a++){
		int d,hacks = 0,stotal=0,dmax=0,dactual = 1;
		string p;
		scanf("%d",&d);
		getchar();
		getline(cin,p);
		
		for(int b = 0; b < p.size(); b++){
			if(p[b] == 'C') dactual*=2;
			else{
				dmax += dactual;
				stotal++;
			}
		}
		
		if(dmax <= d)printf("Case #%d: 0\n",a);
		else if(stotal > d)printf("Case #%d: IMPOSSIBLE\n",a);
		else{
			while(dmax>d){
				int te = dmax/stotal;
				if((double(dmax)/double(stotal)>te))te++;
				if(te%2 != 0)te++;
				dmax -= te/2;
				hacks++;
			}
			printf("Case #%d: %d\n",a,hacks);
		}
		
		//cout << d << "   " <<p;
		
		//printf("Case #%d: %d")
	}
	
	
	return 0;
}
