#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    printf("Os divisores de %d são: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}