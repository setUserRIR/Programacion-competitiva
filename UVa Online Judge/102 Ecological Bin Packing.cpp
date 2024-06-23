#include<cstdio>

int B[3][3];

void setValue(int m[][3]);
int suma(int m[][3]);

int main(){
	
	while(scanf("%d %d %d %d %d %d %d %d %d",&B[0][0],&B[0][1],&B[0][2],&B[1][0],&B[1][1],&B[1][2],&B[2][0],&B[2][1],&B[2][2]) != EOF){
		int cont = 0, pos[6];
		
		for(int b = 0; b < 3; b++){
			for(int g = 0; g < 3; g++){
				if(g==b) continue;
				for(int c = 0; c < 3; c++){
					if(c==b || c==g) continue;
					int ma[3][3];
					setValue(ma);
					ma[0][b] = 0;
					ma[1][g] = 0;
					ma[2][c] = 0;
					pos[cont] = suma(ma);
					cont++;
				}
			}
		}
		int caso = 0, val = pos[0];
		for(int a = 1; a < 6; a++){
			if(val > pos[a]){
				val = pos[a];
				caso = a-1;
			}
		}
		
		switch(caso){
			case 0: printf("BCG %d",val);break;
			case 1: printf("BGC %d",val);break;
			case 2: printf("CBG %d",val);break;
			case 3: printf("CGB %d",val);break;
			case 4: printf("GBC %d",val);break;
			case 5: printf("GCB %d",val);break;
		}
	}
	
	return 0;
}

void setValue(int m[][3]){
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			m[a][b] = B[a][b];
		}
	}	
}

int suma(int m[][3]){
	int sum = 0;
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
			sum += m[a][b];
		}
	}
	return sum;	
}
