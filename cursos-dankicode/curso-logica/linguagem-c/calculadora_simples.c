#include <stdio.h>

int main(){
    int a = 30, b = 15, c;
    int sum = a + b, sub = a - b;
    int multi = a * b, div = a / b;
    
    printf("---------------------------\n");
    printf("A soma dos numeros e %d", sum);
    printf("\nJa a subtracao dos numeros e %d", sub);
    printf("\nA multiplicacao dos numeros e %d", multi);
    printf("\nPor fim, a divisao dos numeros e %d", div);
    printf("\n---------------------------");

    a = c;
    b = a;
    b = c;

    printf("\nA troca de variável foi feita, logo %d virou %d", a, b);
    return 0;
}