#include <stdio.h>
int main()
{
    float Dist, Temp, Velo, LU;
    printf("Informe o tempo gasto na viagem \n");
    scanf("%f", &Temp);
    printf("Informe a velocidade media \n");
    scanf("%f", &Velo);
    Dist = Temp * Velo;
    printf("Sua distancia sera: %.2f \n", Dist);

    LU = Dist / 12;
    printf("A quantidade de combustivel gasto foi: %.2f \n", LU);
    return 0;
}