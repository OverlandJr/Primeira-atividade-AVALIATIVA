#include <stdio.h>

int main() {
    int numeros[10], soma = 0;
    float media;
    
    // lê os 10 números
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    // calcula a média
    media = (float) soma / 10;
    
    // exibe a média
    printf("A média dos números é: %.2f\n", media);
    
    return 0;
}