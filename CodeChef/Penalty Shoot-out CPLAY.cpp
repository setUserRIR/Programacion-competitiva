#include<bits/stdc++.h>

using namespace std;

int main(){
	char partido[20];
	while(scanf("%s",&partido) != EOF){
		int teamA = 0, teamB = 0,ronda = 1,con = 0;
		while(ronda <= 5){
			teamA += partido[con] - 48;
			if(ronda == 4 && teamA+1 < teamB && teamA < teamB+2)break;
			if(ronda == 5 && ((teamA < teamB && teamA < teamB+1) || (teamA > teamB && teamA > teamB+1)))break;
				
			con++;
			teamB += partido[con] -48;
			
			if(ronda == 3 && ((teamA == 0 && teamB == 3) || (teamB == 0 && teamA == 3))) break;
			if(ronda == 4 && ((teamA+1 < teamB && teamA < teamB+1) || (teamA+1 > teamB && teamA > teamB+1)))break;
			if(ronda == 5)break;
			
			con++;
			
			ronda++;
		}
		if(teamA > teamB)printf("TEAM-A %d\n",con+1);
		else if(teamA < teamB)printf("TEAM-B %d\n",con+1);
		else{
			con = 10;
			ronda = 1;
				while(ronda <= 5){
				teamA += partido[con] - 48;	
				con++;
				teamB += partido[con] -48;
				if(teamA != teamB)break;
				if(ronda == 5)break;
				
				con++;
				
				ronda++;
			}
			if(teamA > teamB)printf("TEAM-A %d\n",con+1);
			else if(teamA < teamB)printf("TEAM-B %d\n",con+1);
			else printf("TIE\n");
		}
	}
	
	return 0;
}
