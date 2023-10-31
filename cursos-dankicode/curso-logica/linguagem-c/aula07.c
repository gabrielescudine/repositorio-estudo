#include <stdio.h>

int main(){

    // strcmp(strg1, strg2) == 0
    char player[256];
    char player2[256];

    printf("=============================\n");
    printf("Seja bem-vindo ao jogo Pedra, Papel, Tesoura!\n");
    printf("\nJogador 1, escolha sua opcao: ");
    scanf("%s", &player);
    printf("Jogador 2, escolha sua opcao: ");
    scanf("%s", &player2);
    printf("\nCerto, o Jogador 1 escolheu %s e o Jogador 2 escolheu %s.", player,player2);
    printf("\n=============================");

    if(strcmp(player,"pedra") == 0){

            if(strcmp(player2,"pedra") == 0){
                printf("\nAmbos colocaram a mesma opcao, logo, houve um empate!\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"papel") == 0){
                printf("\nO Jogador 2 venceu, pois papel embrulha pedra!\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("\nO Jogador 1 venceu, pois pedra esmaga tesoura!\nFim do jogo :D");
                printf("\n=============================\n");

            }       
    }
    else if(strcmp(player,"papel") == 0){

            if(strcmp(player2,"pedra") == 0){
                printf("\nO Jogador 1 venceu, pois papel embrulha pedra.\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"papel") == 0){
                printf("\nAmbos colocaram a mesma opcao, logo, houve um empate!\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("\nO Jogador 2 venceu, pois tesoura corta papel!\nFim do jogo :D");
                printf("\n=============================\n");

            }
    else if(strcmp(player,"tesoura") == 0){
            if(strcmp(player2,"pedra") == 0){
                printf("\nO Jogador 2 venceu, pois pedra esmaga papel!\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"papel") == 0){
                printf("\nO Jogador 2 venceu, pois papel embrulha pedra!\nFim do jogo :D");
                printf("\n=============================\n");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("\nAmbos colocaram a mesma opcao, logo, houve um empate!\nFim do jogo :D");
                printf("\n=============================\n");
            }
    }
    else{
        if(player != "pedra", "Pedra", "papel", "Papel", "tesoura", "Tesoura"){
            printf("O Jogador 1 digitou algo invalido para o jogo.\nFim do jogo :(");
            printf("\n=============================\n");
        }else if(player2 != "pedra", "Pedra", "papel", "Papel", "tesoura", "Tesoura"){
            printf("O Jogador 2 digitou algo invalido para o jogo.\nFim do jogo :(");
            printf("\n=============================\n");
        }
        
    }

    return 0;
    }
}