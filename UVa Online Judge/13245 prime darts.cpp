#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;

bool prim(int x);

int main(){
	freopen("entrada.in","r",stdin);
	freopen("salida.out","w",stdout);

	int t;
	scanf("%d",&t);
	
	for(int z = 0; z < t; z++){
		
		vector<int> primos;
		int n,q;
		
		primos.push_back(1);
		scanf("%d %d",&n,&q);
		
		int a = 0, x = 2;
		while(a < n-1){
			if(prim(x)){
				primos.push_back(x);
				a++;
			}
			x++;
		}
		
		int pos = n-1,dardos = 0;
		while(q != 0){
			if(q >= primos[pos]){
				dardos += q/primos[pos]; 
				q = q%primos[pos];
			}else if(q == 1){
				dardos++;
				q--;
				break;
			}else{
				pos--;	
			}
		}
		printf("%d\n",dardos);
	}
	return 0;
}

bool prim(int x){
	bool es = true;
	for(int a = 2; a <= sqrt(x); a = a == 2? a+1:a+2){
			if(x % a == 0){
				es = false;
				break;
			}
		}
	return es;
}
