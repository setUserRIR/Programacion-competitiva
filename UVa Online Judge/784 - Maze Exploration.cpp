#include<bits/stdc++.h>

using namespace std;

vector<string> mapa;
int yas = 0, xas;

int x[4] = { 0,-1,1,0};
int y[4] = {-1, 0,0,1};


void fillMap(int px, int py){
	if(py < 0 || py >= mapa.size())return;
	if(px < 0 || px >= mapa[py].size())return;
	if(mapa[py][px] != '#' && mapa[py][px] != '*' && mapa[py][px] != ' ')return;
	if(mapa[py][px] == '#')return;
	
	mapa[py][px] = '#';
	for(int a = 0; a < 4; a++){
		fillMap(px+x[a],py+y[a]);
	}
}

int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n;
	scanf("%d\n",&n);
	for(int cas = 0; cas < n; cas++){
		mapa.clear();
		string ts;
		int con = 0;
		while(getline(cin,ts)){
			for(int a = 0; a < ts.size(); a++){
				
				if(ts[a] == '*'){
					xas = a;
					yas = con;	
				}
			}
			mapa.push_back(ts);
			if(ts[0] == '_')break;
			con++;
		}
		
		fillMap(xas,yas);
		
		for(int a = 0; a < mapa.size(); a++){
			cout << mapa[a] <<endl;
		}
		
	}
	
	return 0;
}


