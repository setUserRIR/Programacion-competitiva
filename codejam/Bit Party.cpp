#include<bits/stdc++.h>

using namespace std;

int bits;

struct cajero{
	int max,tScan,tSave;
};

bool ord (cajero i,cajero j) {
	if(i.tScan == j.tScan) return (i.tSave<j.tSave);
	else return (i.tScan<j.tScan);
}

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(int cas = 0; cas < t; cas++){
		int bot,caj;
		scanf("%d %d %d",&bot,&bits,&caj);
		vector<cajero> cajeros;
		
		for(int a = 0; a < caj; a++){
			cajero te;
			scanf("%d %d %d",&te.max,&te.tScan,&te.tSave);
			cajeros.push_back(te);
		}
		
		sort(cajeros.begin(),cajeros.end(),ord);
		
		int mejort = 0;
		
		for(int a = 0; a < caj; a++){
			printf("%d %d %d\n",cajeros[a].max,cajeros[a].tScan,cajeros[a].tSave);
			
		}
	}
	
	return 0;
}
