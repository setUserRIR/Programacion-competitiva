#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;


int main(){
	int n;
	while(scanf("%d",&n) == 1){
		int nums[n+5];
		int cont = 0;
		
		for(int a = 1; a <= n; a++){
			scanf("%d",&nums[a]);
		}
		
		int a = 1;
		
		while(a <= n){
			if(nums[a] == a){
				a++;
			}else{
				int temp = nums[nums[a]];
				nums[nums[a]] = nums[a];
				nums[a] = temp;
				cont++;
			}
		}
		printf("%d\n",cont);
	}
	return 0;
}
