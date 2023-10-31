#include <stdio.h>

int main(){

    char nome[256];
    int idade;

    printf("Ola, seja bem-vindo.\nQual o seu nome?");
    printf("\nNome: ");
    scanf("%s", &nome);
    printf("E qual a sua idade, %s?", nome);
    printf("\nIdade: ");
    scanf("%d", &idade);

    if(idade <= 0 || idade >= 150){
        while(idade <= 0 || idade >= 150){
            printf("Essa idade não existe. Digite uma idade valida.");
                printf("\nIdade: ");
                scanf("%d", &idade);
        }
    }
        printf("Perfeito, %s! Voce tem %d anos", nome, idade);
        printf("\nAguarde, estamos checando os dados...\n");
        printf("A primeira letra do seu nome e '%c' e voce tem %d anos.", nome[0], idade);

        if(idade >= 60){
            printf("\nUau! Voce ja e idoso :D. Cuide da sua saude!");
        }else if(idade >= 18){
            printf("\nVoce e adulto, ainda tem o que viver.");
        }else if(idade >= 12){
            printf("\nVoce e adolescente, muito jovem e cuide de sua vida");
        }else{
            printf("\nTemos aqui um nenem.");
        }


    return 0;
}