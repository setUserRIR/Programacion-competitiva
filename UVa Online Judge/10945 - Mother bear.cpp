#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	while(getline(cin,s), s.compare("DONE")){
		bool es = true;
		string s2(s);
		reverse(s2.begin(),s2.end());
		int size = s.size();
		for(int a = 0; a < size; a++){
			if(s[a] == '.' || s[a] == ',' || s[a] == '?' || s[a] == '!' || s[a] == ' ')s.erase(s.begin()+a);
			if(s2[a] == '.' || s2[a] == ',' || s2[a] == '?' || s2[a] == '!' || s2[a] == ' ')s2.erase(s2.begin()+a);
			if(s[a] == '.' || s[a] == ',' || s[a] == '?' || s[a] == '!' || s[a] == ' ')s.erase(s.begin()+a);
			if(s2[a] == '.' || s2[a] == ',' || s2[a] == '?' || s2[a] == '!' || s2[a] == ' ')s2.erase(s2.begin()+a);
			if(s[a] == '.' || s[a] == ',' || s[a] == '?' || s[a] == '!' || s[a] == ' ')s.erase(s.begin()+a);
			if(s2[a] == '.' || s2[a] == ',' || s2[a] == '?' || s2[a] == '!' || s2[a] == ' ')s2.erase(s2.begin()+a);
			
			s[a] = tolower(s[a]);
			s2[a] = tolower(s2[a]);
		}
		//cout << s <<endl<<s2<<endl;
		if(s.compare(s2) == 0)printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
	}

	return 0;
}


