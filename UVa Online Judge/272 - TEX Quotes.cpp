#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string i;
	bool cuote = false;
	
	while(getline(cin,i)){
		string f = "";
		for(int a = 0; a < i.size(); a++){
			if(i[a] == '"' && !cuote){
				f += "``";
				cuote = true;
			}else if(i[a] == '"' && cuote){
				f += "''";
				cuote = false;
			}else f += i[a];
		
		}
		cout << f << endl;
	}
	
	return 0;
}

