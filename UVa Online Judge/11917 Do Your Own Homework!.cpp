#include<cstdio>
#include<map>
#include<string>
#include<iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d",&T);
	
	for(int a = 0; a < T; a++){
		int N,D;
		string S;
		scanf("%d",&N);
		map<string,int> sujetos;
		for(int b = 0; b < N; b++){
			string s;
			int d;
			cin >>s >>d;
			sujetos[s] = d;
		}
		cin >>D >>S;
		if(!sujetos[S]) printf("Case %d: Do your own homework!\n",a+1);
		else if(sujetos[S] <= D) printf("Case %d: Yesss\n",a+1);
		else if(sujetos[S] <= D+5) printf("Case %d: Late\n",a+1);
		else printf("Case %d: Do your own homework!\n",a+1);
	}
	
	
	return 0;
}
