#include<cstdio>

int main(){
    int alumnos,computadores,quemados,sincompilador;
    scanf("%d %d %d %d",&alumnos,&computadores,&quemados,&sincompilador);

    int malos = quemados+sincompilador;
    alumnos++;

    if(alumnos > computadores-malos){
        if(quemados > sincompilador) printf("Caio, a culpa eh sua!\n");
        else printf("Igor bolado!\n");
    }else printf("Igor feliz!\n");


    return 0;
}