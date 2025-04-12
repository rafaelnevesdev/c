#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias;

    printf("Quantos anos voce tem? ");
    scanf("%d", &anos);
    printf("Quantos meses (além dos anos)? ");
    scanf("%d", &meses);
    printf("Quantos dias (além dos meses)? ");
    scanf("%d", &dias);

    totalDias = anos * 365 + meses * 30 + dias;
    printf("Voce ja viveu aproximadamente %d dias.\n", totalDias);
    return 0;
}
