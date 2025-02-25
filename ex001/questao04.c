#include <stdio.h>

int main()
{
    int diasTrabalhados;
    float salario, salarioComBonus;

    printf("Quanto voce ganha? ");
    scanf("%f", &salario);

    printf("Voce trabalhou por quantos dias? ");
    scanf("%d", &diasTrabalhados);

    if (diasTrabalhados < 22)
    {
        printf("Voce nao recebe bonus.");
    } 
    else 
    {
        salarioComBonus = salario * 1.05;
        printf("Voce recebeu um bonus, seu salario ficou: %0.2f", salarioComBonus);  
    }
    
    return 0;
}

