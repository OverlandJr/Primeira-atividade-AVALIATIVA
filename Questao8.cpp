#include <stdio.h>

int main() {
    int num, maior, menor;
    
    // lê o primeiro número
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    // define o primeiro número como o maior e o menor número lido até o momento
    maior = menor = num;
    
    // lê os próximos números até que um número negativo seja inserido
    while (num >= 0) {
        // verifica se o número lido é maior ou menor do que os anteriores
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        
        // lê o próximo número
        printf("Digite outro número inteiro: ");
        scanf("%d", &num);
    }
    
    // exibe o maior e o menor número lido
    printf("O maior número lido é: %d\n", maior);
    printf("O menor número lido é: %d\n", menor);
    
    return 0;
}