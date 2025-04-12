#include <stdio.h>

int main() 
{
    float quilometrosPorHora, metrosPorSegundo;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &quilometrosPorHora);

    metrosPorSegundo = quilometrosPorHora / 3.6;

    printf("Sua velocidade convertida em metros por segundo é %.2f m/s\n", metrosPorSegundo);

    return 0;
}
