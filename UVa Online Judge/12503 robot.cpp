#include<cstdio>
#include<cstring>

int main(){
	
	int T;
	scanf("%d",&T);
	for(int a = 0;a<T;a++){
		int N[101],n,pos=0;
		fflush(stdin);
		scanf("%d",&n);
		for(int b = 1;b <= n;b++){
			char s[50];
			fflush(stdin);
			scanf("%s",&s);
			if(!strcmp(s,"SAME")){
				int x;
				char d[5];
				scanf("%S %d",&d,&x);
				pos += N[x];
				N[b] = N[x];
			}else if(!strcmp(s,"LEFT")){
				pos--;
				N[b] = -1;
			}else{
				pos++;
				N[b] = 1;
			}
		}
		printf("%d\n",pos);
	}
	return 0;
}
