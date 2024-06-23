#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,d;
	while(scanf("%d %d",&n,&d) != EOF){
		
		char s[100], sa[100] ;
		bool hay = false;
		
		for(int a = 0; a < d; a++){
			scanf("%s",s);
			bool f = true;
			for(int b = 0; b < n; b++){
				int t;
				scanf("%d",&t);
				if(!t) f = false;
			}
			if(f && !hay){
				strcpy(sa,s);
				hay = true;
			} 
		}
		
		if(hay) printf("%s\n",sa);
		else printf("Pizza antes de FdI\n");
		
	}
		
	return 0;
}
