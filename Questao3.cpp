#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}