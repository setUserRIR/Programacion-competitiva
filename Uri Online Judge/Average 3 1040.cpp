#include<bits/stdc++.h>

using namespace std;

int main(){
	
	float a,b,c,d,m;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	m = (2*a+3*b+4*c+d)/10;
	printf("Media: %.1f\n",m);
	if(m >= 7.0) printf("Aluno aprovado.\n");
	else if(m < 5.0) printf("Aluno reprovado.\n");
	else{
		printf("Aluno em exame.\n");
		scanf("%f",&a);
		printf("Nota do exame: %.1f\n",a);
		m = (m+a)/2;
		if(m >= 5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n",m);
	}
	
	return 0;
}
