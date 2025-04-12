#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    int soma = a + b;

    if (soma > c)
        printf("A + B é maior que C\n");
    else if (soma < c)
        printf("A + B é menor que C\n");
    else
        printf("A + B é igual a C\n");

    return 0;
}
