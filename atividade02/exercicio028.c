#include <stdio.h>

int main() {
    int N, C, D, U, M;

    printf("Digite um número de 3 algarismos: ");
    scanf("%d", &N);

    if (N < 100 || N > 999) {
        printf("Número inválido. Deve conter exatamente 3 algarismos.\n");
        return 1;
    }

    C = N / 100;
    D = (N / 10) % 10;
    U = N % 10;

    M = U * 100 + D * 10 + C;

    printf("O número invertido é: %d\n", M);

    return 0;
}
