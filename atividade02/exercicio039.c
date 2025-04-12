#include <stdio.h>

int main() {
    int compra, pago, troco;
    int n100, n10, n1;

    printf("Valor da compra: R$ ");
    scanf("%d", &compra);
    printf("Valor pago: R$ ");
    scanf("%d", &pago);

    troco = pago - compra;

    if (troco < 0) {
        printf("Valor insuficiente.\n");
    } else {
        n100 = troco / 100;
        troco %= 100;
        n10 = troco / 10;
        troco %= 10;
        n1 = troco;

        printf("Troco: R$ %d\n", pago - compra);
        printf("Notas de R$100: %d\n", n100);
        printf("Notas de R$10: %d\n", n10);
        printf("Notas de R$1: %d\n", n1);
    }

    return 0;
}
