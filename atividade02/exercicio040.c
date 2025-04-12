#include <stdio.h>

int main() {
    char nome[30];
    int qtd_parafusos, qtd_porcas, qtd_arruelas;
    float precoParafuso = 2.0, precoPorca = 1.5, precoArruela = 0.5;
    float total, desconto = 0;

    printf("Nome do cliente: ");
    scanf("%s", nome);

    printf("Quantidade de parafusos: ");
    scanf("%d", &qtd_parafusos);
    printf("Quantidade de porcas: ");
    scanf("%d", &qtd_porcas);
    printf("Quantidade de arruelas: ");
    scanf("%d", &qtd_arruelas);

    float totalParafusos = qtd_parafusos * precoParafuso * 0.8;
    float totalPorcas = qtd_porcas * precoPorca * 0.9;
    float totalArruelas = qtd_arruelas * precoArruela * 0.7;

    total = totalParafusos + totalPorcas + totalArruelas;

    printf("Cliente: %s\n", nome);
    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}
