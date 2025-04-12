#include <stdio.h>

int main()
{
    float salarioBruto, descontoPrevidencia, descontoImposto, salarioLiquido;

    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salarioBruto);

    descontoPrevidencia = salarioBruto * 0.10;

    float restante = salarioBruto - descontoPrevidencia;

    descontoImposto = restante * 0.05;

    salarioLiquido = restante - descontoImposto;

    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}