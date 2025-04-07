#include <stdio.h>

int main() 
{
    int a, b, resultado;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    resultado = (a * a) + (b * b);

    printf("O resultado da soma do quadrado de cada valor é: %d\n", resultado);

    return 0;
}