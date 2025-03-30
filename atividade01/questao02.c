#include <stdio.h>

int main()
{
    float area, base, altura;
    printf("Qual o valor da base do triangulo? \n");
    scanf("%f", &base);

    printf("Qual o valor da altura do triangulo? \n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo vale: %0.2f\n", area);

    return 0;
}