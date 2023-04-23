#include <stdio.h>

int main() {
    int num, i, termoAnterior = 0, termoAtual = 1, proximoTermo;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número deve ser maior ou igual a zero.\n");
    } else if (num == 0) {
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termoAnterior);
    } else if (num == 1) {
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termoAtual);
    } else {
        for (i = 2; i <= num; i++) {
            proximoTermo = termoAnterior + termoAtual;
            termoAnterior = termoAtual;
            termoAtual = proximoTermo;
        }

        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termoAtual);
    }

    return 0;
}