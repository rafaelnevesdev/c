#include <stdio.h>
int main()
{
    float comp, larg, alt, vol;
    printf("Informe o comprimento da caixa \n");
    scanf("%f", &comp);
    printf("Informe a largura da caixa \n");
    scanf("%f", &larg);
    printf("Informe a altura dacaixa \n");
    scanf("%f", &alt);
    vol = comp * larg * alt;
    printf("O volume da sua caixa sera de:  %.2f \n ", vol);
    return 0;
}