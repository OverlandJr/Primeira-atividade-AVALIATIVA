#include <stdio.h>

int main() {
    int opcao, quantidade;
    float preco, total = 0;
    
    do {
        // exibe o menu de frutas disponíveis
        printf("\nMenu de Frutas:\n");
        printf("1 - Abacaxi (R$5.00/unidade)\n");
        printf("2 - Maçã (R$1.00/unidade)\n");
        printf("3 - Pera (R$4.00/unidade)\n");
        printf("0 - Finalizar compra\n");
        
        // solicita a opção do usuário
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);
        
        // verifica se o usuário escolheu uma fruta
        if (opcao > 0 && opcao <= 3) {
            // solicita a quantidade de frutas
            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidade);
            
            // calcula o valor total da compra da fruta selecionada
            switch (opcao) {
                case 1:
                    preco = 5.0;
                    break;
                case 2:
                    preco = 1.0;
                    break;
                case 3:
                    preco = 4.0;
                    break;
            }
            total += preco * quantidade;
            
            // exibe o valor total da compra da fruta selecionada
            printf("Valor da compra: R$%.2f\n", preco * quantidade);
        }
        else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
    
    // exibe o valor total da compra
    printf("\nValor total da compra: R$%.2f\n", total);
    
    return 0;
}