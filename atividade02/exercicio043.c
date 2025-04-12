#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[30], categoria;
    float salario, novoSalario;

    printf("Nome do empregado: ");
    scanf("%s", nome);
    printf("Categoria: ");
    scanf(" %c", &categoria);
    printf("Salario atual: R$ ");
    scanf("%f", &salario);

    categoria = toupper(categoria);

    if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H')
        novoSalario = salario * 1.10;
    else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T')
        novoSalario = salario * 1.15;
    else if (categoria == 'K' || categoria == 'R')
        novoSalario = salario * 1.25;
    else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S')
        novoSalario = salario * 1.35;
    else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z')
        novoSalario = salario * 1.50;
    else {
        printf("Categoria invalida!\n");
        return 1;
    }

    printf("Nome: %s | Categoria: %c | Salario reajustado: R$ %.2f\n", nome, categoria, novoSalario);
    return 0;
}
