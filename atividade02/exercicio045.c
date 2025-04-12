#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    float saldo, valor;
    char operacao[10];

    printf("Numero da conta: ");
    scanf("%d", &numero);
    printf("Saldo atual: R$ ");
    scanf("%f", &saldo);
    printf("Operacao (deposito ou retirada): ");
    scanf("%s", operacao);
    printf("Valor da operacao: R$ ");
    scanf("%f", &valor);

    if (strcmp(operacao, "deposito") == 0) {
        saldo += valor;
    } else if (strcmp(operacao, "retirada") == 0) {
        saldo -= valor;
    } else {
        printf("Operacao invalida.\n");
        return 1;
    }

    printf("Novo saldo: R$ %.2f\n", saldo);
    if (saldo < 0)
        printf("Conta estourada!\n");

    return 0;
}
