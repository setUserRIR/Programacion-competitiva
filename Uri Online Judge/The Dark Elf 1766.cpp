#include<bits/stdc++.h>

using namespace std;

typedef struct{
	char name[200];
	int peso,edad;
	float size;
}reno;

bool Ssort(reno a, reno b){
	if(a.peso == b.peso){
		if(a.edad == b.edad){
			if(a.size == b.size){
				return a.name < b.name;
			}else return a.size < b.size;
		}else return a.edad < b.edad;
	}else return a.peso > b.peso;
}

int main(){
	
	int k;
	scanf("%d",&k);
	
	for(int cas = 1; cas <= k; cas++){
		int n,m;
		vector<reno> v;
		scanf(" %d %d",&n,&m);
		for(int a = 0; a < n; a++){
			reno t;
			scanf("%s %d %d %f",&t.name,&t.peso,&t.edad,&t.size);
			v.push_back(t);
		}
		
		sort(v.begin(),v.end(),Ssort);
		printf("CENARIO {%d}\n",cas);
		for(int a = 1; a <= m; a++){
			printf("%d - %s\n",a,v[a-1].name);
		}
	}
	
	
	return 0;
}
