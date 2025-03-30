#include <stdio.h>

int main()
{
    float resultado, A, B, C, D;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);

    resultado = (A * B) + (A * C) + (A * D) + (B * C) + (B * D) + (C * D);

    printf("O resultado é: %.2f\n", resultado);

    return 0;
}
