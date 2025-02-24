#include <stdio.h>

int main() {
    float area, raio;
    const float pi = 3.14;  // Usando const para representar uma constante

    printf("Qual o raio da circunferência? ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área da circunferência é: %.2f\n", area);

    return 0;
}
