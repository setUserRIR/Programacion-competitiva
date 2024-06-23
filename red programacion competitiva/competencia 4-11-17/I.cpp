#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
#include<utility>

using namespace std;
typedef pair<int,int> ii;

int main(){
	int n;
	vector<ii> city;
	while(scanf("%d",&n) == 1){
		for(int a = 0; a < n; a++){
			ii temp;
			scanf("%d %d",&temp.first,&temp.second);
			city.push_back(temp);
		}
		
		int bue = 0;
		
		for(int a = 0; a < n; a++){
			for(int b = 0; b < n; b++){
				if(a == b) continue;
				int x = abs(city[a].first - city[b].first), y = abs(city[a].second - city[b].second);
				if(x == y){
					printf("%d %d, ",x,y);
					bue++;
				} 
				
			}
		}
		float prob = bue/n;
		printf("%f\n",prob);
	}
	return 0;
}
