#include<iostream>
#include<string>

using namespace std;

int main(){
	int cont = 1;
	while(1){
		
		string al;
		cin >> al;
		
		if(!al.compare("Hajj")){
			cout << "Case " << cont <<": Hajj-e-Akbar"<<endl;
		}else if(!al.compare("Umrah")){
			cout << "Case " << cont <<": Hajj-e-Asghar" <<endl;
		}else{
			break;
		}
		cont++;
	}
	
	
	return 0;
}
