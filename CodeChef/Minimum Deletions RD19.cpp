#include<bits/stdc++.h>

using namespace std;

double mcd(int a, int b){
	double resto = 0;
	while(b > 0){
		resto = b;
		b = a%b;
		a = resto;
	}
	return a;
}

int main(){
	
	printf("%f",mcd(25,105));
	
	return 0;
}
