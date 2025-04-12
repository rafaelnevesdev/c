#include <stdio.h>

int main() {
    int carros;
    float valorVendas, salarioMin, salario;

    printf("Salario minimo atual: R$ ");
    scanf("%f", &salarioMin);
    printf("Carros vendidos: ");
    scanf("%d", &carros);
    printf("Total de vendas: R$ ");
    scanf("%f", &valorVendas);

    salario = 2 * salarioMin + (carros * 50) + (valorVendas * 0.05);

    printf("Salario total: R$ %.2f\n", salario);
    return 0;
}
