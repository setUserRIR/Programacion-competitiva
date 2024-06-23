#include<bits/stdc++.h>

using namespace std;

int main(){
	
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	
	if(a == 0 || (b*b -4*a*c) < 0)printf("Impossivel calcular\n");
	else printf("R1 = %.5f\nR2 = %.5f\n",(-1*b+sqrt(b*b-4*a*c))/(2*a),(-1*b-sqrt(b*b-4*a*c))/(2*a));
		
	return 0;
}
