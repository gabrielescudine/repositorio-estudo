#include <stdio.h>

int main(){
    char nome[256];
    char sobrenome[256];
    int anoNascimento;
    int anoAtual = 2023;
    int idade;

    printf("----------------------------\n");
    printf("Olá, seja bem-vindo!\nPor favor, digite o seu nome.\n");
    printf("Nome: ");
    scanf("%s", nome);
    printf("Seja bem-vindo, %s! Ficamos felizes em te ver :D.\n", nome);
    printf("E qual e o seu sobrenome, %s?\nDigite o seu sobrenome.\n", nome);
    printf("Sobrenome: ");
    scanf("%s", sobrenome);
    printf("Que belo sobrenome, %s %s.\nAgora, por fim, em que ano voce nasceu?\n", nome, sobrenome);
    printf("Ano de Nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("Caramba! Voce nasceu em %d e tem %d anos.\n", anoNascimento, idade);
    printf("----------------------------\n");

    // if(anoNascimento == 2005){
    //     idade = 18;
    //     printf("Que maravilha! Voce tem %d anos.", idade);
    // }else{
    //     idade = 17;
    //     printf("Que maravilha! Voce tem %d anos.", idade);
    // }

    return 0;
}