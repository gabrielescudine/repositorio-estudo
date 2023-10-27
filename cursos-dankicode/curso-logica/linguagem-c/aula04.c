#include <stdio.h>

int main(){
    int contador = 1;
    int limite = 10;

    while(contador <= limite){
        printf("Primeiro contador %d \n", contador);
            if(contador == 3){
               int contador_2 = 3;

                while(contador_2 >= 0){
                    printf("Segundo contador %d \n", contador_2);
                        
                    contador_2--;
                }
            
            } else if(contador == 7){
                            int contador_3 = 6;
                            
                                while(contador_3 >= 4){

                                    printf("Terceiro contador %d \n", contador_3);

                                    contador_3--;
                                }
                        }
        contador++;
    }
}