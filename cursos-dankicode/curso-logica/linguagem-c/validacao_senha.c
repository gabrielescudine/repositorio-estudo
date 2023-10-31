#include <stdio.h>

int main(){
    char usuario[256];
    int senha;
    int validacao = 303030;
    
    validacao == senha;

    printf("=============================\n");
    printf("Seja bem-vindo ao Facebook!\n");
    printf("Digite o nome de usuario e senha.\n");
    printf("Usuario: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%d", &senha);

    if(senha == validacao){

        printf("=============================\n");
        printf("Seja bem-vindo %s!\nFaz muito tempo desde sua ultima entrada :(.", usuario);
        printf("\nFim do programa.");
        printf("\n=============================\n");

    }else if(senha != validacao){

        while(senha != validacao){
            printf("Senha incorreta. Digite novamente.\n");
            printf("Senha: ");
            scanf("%d", &senha);
        }

        printf("=============================\n");
        printf("Seja bem-vindo %s!\nFaz muito tempo desde sua ultima entrada :(.", usuario);
        printf("\n=============================\n");
        printf("\nFim do programa.");

    }
    return 0;
}