#include <stdio.h>

int main() {
    char nome[30];
    float venda, comissao, totalVendas = 0;

    for (int i = 0; i < 3; i++) {
        printf("Nome do corretor: ");
        scanf("%s", nome);
        printf("Valor da venda: R$ ");
        scanf("%f", &venda);

        if (venda > 50000)
            comissao = venda * 0.12;
        else if (venda >= 30000)
            comissao = venda * 0.095;
        else
            comissao = venda * 0.07;

        printf("Nome: %s | Venda: R$ %.2f | Comissão: R$ %.2f\n", nome, venda, comissao);
        totalVendas += venda;
    }

    printf("Total de vendas da empresa: R$ %.2f\n", totalVendas);
    return 0;
}
