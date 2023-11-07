#include <stdio.h>

int main(){
    char usuario[256];
    int validacao;
    int qtd_banana, qtd_morango, qtd_uva, qtd_melancia;
    float preco_banana = 2.99, preco_morango = 1.50, preco_uva = 1.00, preco_melancia = 10.99;
    float total_banana, total_morango, total_uva, total_melancia, total;

    printf("==============================================================\n");
    printf("Olá, seja bem-vindo à loja do Bahamas.");
    printf("\nPara termos uma interação mais adequada, qual é o seu nome?\n");
    printf("Digite o seu nome: ");
    scanf("%s",&usuario);
    printf("Perfeito, %s. Ficamos felizes de estar conosco :D.", usuario);
    printf("\nAgora lhe pergunto, o que o senhor deseja? Atualmente, estamos vendendo\nbanana, morango, uva e melancia.");
    printf("\nO senhor deseja comprar algumas bananas?");
    printf("\nDigite 1(sim) ou 2(não): ");
    scanf("%d", &validacao);

    total_banana = qtd_banana * preco_banana;
    total_morango = qtd_morango * preco_morango;
    total_uva = qtd_uva * preco_uva;
    total_melancia = qtd_melancia * preco_melancia;
    total = total_banana + total_morango + total_uva + total_melancia;

        if(validacao != 1 && validacao != 2){
            while(validacao != 1 && validacao != 2){
                printf("================================================================\n");
                printf("\nOpção inválida. Digite 1(sim) ou 2(não): \n");
                scanf("%d", &validacao);
                printf("\n================================================================\n");
                
            }
        }
    
            if(validacao == 1){
                printf("Perfeito! Quantas bananas o senhor deseja?");
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &qtd_banana);
                printf("Ótimo! O senhor deseja %d bananas.", qtd_banana);
                // printf("\nPortanto, dará o valor de R$%f", total_banana);
                printf("\nO senhor deseja comprar alguns morangos?");
                printf("\nDigite 1(sim) ou 2(não): ");
                scanf("%d", &validacao);
                printf("Quantos morangos o senhor deseja?");
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &qtd_morango);
                    if(validacao != 1 && validacao != 2){
                        while(validacao != 1 && validacao != 2){
                        printf("================================================================\n");
                        printf("\nOpção inválida. Digite 1(sim) ou 2(não): \n");
                        scanf("%d", &validacao);
                        printf("\n================================================================\n");
                
                        }
                    }
                printf("Ótimo! O senhor deseja %d morangos.", qtd_morango);
            }else if(validacao == 2){
                printf("Tudo bem, então o senhor deseja comprar alguns morangos?");
                printf("\nDigite 1(sim) ou 2(não): ");
                scanf("%d", &validacao);

                    if(validacao != 1 && validacao != 2){
                        while(validacao != 1 && validacao != 2){
                        printf("================================================================\n");
                        printf("\nOpção inválida. Digite 1(sim) ou 2(não): \n");
                        scanf("%d", &validacao);
                        printf("\n================================================================\n");
                        
                        }
                    }
                printf("Quantos morangos o senhor deseja?");
                printf("\nDigite a quantidade desejada: ");
                scanf("%d", &qtd_morango);
                printf("Ótimo! O senhor deseja %d morangos.", qtd_morango);
            }

}