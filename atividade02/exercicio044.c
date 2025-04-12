#include <stdio.h>

int main() {
    int qtd1, qtd2, qtd3;
    float total;

    printf("Quantidade vendida do tipo 1: ");
    scanf("%d", &qtd1);
    printf("Quantidade vendida do tipo 2: ");
    scanf("%d", &qtd2);
    printf("Quantidade vendida do tipo 3: ");
    scanf("%d", &qtd3);

    total = qtd1 * 0.50 + qtd2 * 0.60 + qtd3 * 0.75;

    printf("Total arrecadado: R$ %.2f\n", total);
    return 0;
}
