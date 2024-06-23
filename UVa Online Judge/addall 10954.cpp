#include<cstdio>
#include<queue>

using namespace std;

int main(){
	
	int N;
	
	while(scanf("%d",&N), N){
		int total = 0;
		priority_queue<int> pq;
		for(int a = 0; a < N; a++){
			int temp;
			scanf("%d",&temp);
			pq.push(-1*temp);
		}
		while(pq.size() > 1){
			int a,b;
			a = pq.top();
			pq.pop();
			b = pq.top();
			pq.pop();
			total += a+b;
			pq.push(a+b);
		}
		printf("%d\n",-1*total);
	}
	
	
	return 0;
}
