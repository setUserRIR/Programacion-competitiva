#include<bits/stdc++.h>

using namespace std;

int main(){

	double s;

	int im=1,ex=0;

	while(im <= 39){
		s += im/pow(2,ex);
		im += 2;
		ex ++;
	}

	printf("%.2lf\n",s);

	return 0;
}
