#include <stdio.h>

int main() {
    char nome[20];
    float preco, desconto, precoFinal, total = 0;

    for (int i = 1; i <= 4; i++) {
        printf("Nome do artigo %d: ", i);
        scanf("%s", nome);
        printf("Preco: R$ ");
        scanf("%f", &preco);
        printf("Percentual de desconto: ");
        scanf("%f", &desconto);

        precoFinal = preco * (1 - desconto / 100);
        printf("%s - Preco com desconto: R$ %.2f\n", nome, precoFinal);
        total += precoFinal;
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
