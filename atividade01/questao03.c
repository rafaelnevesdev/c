#include <stdio.h>

int main()
{
    float salarioBase, INSS, valorDoDesconto;
    
    printf("Quanto é o seu salario bruto? ");
    scanf("%f", &salarioBase);

    INSS = 0.08;

    valorDoDesconto = salarioBase * INSS;

    printf("O valor do desconto sobre R$%.2f é R$%.2f", salarioBase, valorDoDesconto);  // formatar para 2 casas decimais

    return 0;
}
