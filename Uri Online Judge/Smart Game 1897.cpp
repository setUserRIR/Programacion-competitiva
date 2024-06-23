#include<bits/stdc++.h>

using namespace std;

struct num{
	int n, past;
	int dis;
	num(int a, int b, int c){
		n = a;
		dis = b;
		past = c;
	}
};


int BFS(int ini, int des){
	if(ini == des) return 0;
	
	map<int,bool> visitado;
	queue<num> cola;
	cola.push(num(ini,0,ini));
	
	while(!cola.empty()){
		num nodo = cola.front();
		int n = nodo.n, t, past = nodo.past;
		int dis = nodo.dis;
		cola.pop();
		
		if(n == des) return dis;
		
		t = n*2;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
		
		t = n*3;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
		
		t = n/2;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
		
		t = n/3;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
		
		t = n+7;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
		
		t = n-7;
		if(visitado[t] == false){
			visitado[t] = true;
			cola.push(num(t,dis+1,n));
		}
	}
	
}

int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	printf("%d\n",BFS(n,m));
	
	return 0;
}
