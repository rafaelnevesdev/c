#include <stdio.h>

int main() 
{
    float val1, val2, resultado;
    printf("Digite o primeiro numero para calcular a media: ");
    scanf("%f", &val1);

    printf("Digite o segundo numero para calcular a media: ");
    scanf("%f", &val2);

    resultado = (val1 + val2) / 2;

    printf("O resultado da media aritmetica dos dois numeros é: %.2f\n", resultado);

    return 0;
}