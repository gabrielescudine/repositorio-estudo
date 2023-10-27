#include <stdio.h>

int main(){
int horario_cinema = 20;
int horario_atual = 20.5;
float tolerancia = horario_cinema + 0.5;

    if(horario_atual >= horario_cinema & horario_atual <= tolerancia){
        printf("Podemos entrar. O filme começou agora.\n\n");
    } else if(horario_atual < horario_cinema){
        printf("Vamos esperar, chegamos cedo.\n\n");
    } else{
        printf("Você está atrasado, agora não é mais possível entrar.\n\n");
    }
}