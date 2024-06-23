#include<bits/stdc++.h>

using namespace std;

struct punto{
	int x,y;
	
	punto(int a = 0, int b = 0){
		x = a;
		y = b;
	}
	
	int calc(punto a){
		return (x > a.x ? x-a.x: a.x-x) + (y > a.y ? y-a.y: a.y-y);
	}
};

int main(){
	
	int T;
	scanf("%d",&T);
	
	for(int cas = 0; cas < T; cas++){
		
		int n,m,lim;
		scanf("%d %d",&n,&m);
		
		lim = n+m-2;
		
		vector<punto> pts;
		vector<int> v(n+m,0);
		
		punto tp;
		bool flag = false;
		
		for(int a = 0; a < n; a++){
			for(int b = 0; b < m; b++){
				char t;
				scanf(" %c",&t);
				
				if(t == '0') continue;
				punto pt(a,b);
				
				if(!flag){
					tp = pt;
					flag = true;
				}else{
					pts.push_back(pt);
					v[tp.calc(pt)-1]++;
				}
			}
		}
		int tam = pts.size();
		for(int a = 0; a < tam-1; a++){
			for(int b = a+1; b < tam; b++){
				v[pts[a].calc(pts[b])-1]++;
			}
		}
		
		printf("%d",v[0]);
		for(int a = 1; a < lim; a++) printf(" %d",v[a]);
		
	}
	
	return 0;
}
