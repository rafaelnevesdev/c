#include <stdio.h>

int main() {
    int Codigo, A, B, C, D, E, S, DigitoV;

    printf("Digite um código de 5 algarismos: ");
    scanf("%d", &Codigo);

    if (Codigo < 10000 || Codigo > 99999) {
        printf("Código inválido. Deve conter exatamente 5 algarismos.\n");
        return 1;
    }

    A = Codigo / 10000;
    B = (Codigo / 1000) % 10;
    C = (Codigo / 100) % 10;
    D = (Codigo / 10) % 10;
    E = Codigo % 10;

    S = 6*A + 5*B + 4*C + 3*D + 2*E;
    DigitoV = S % 7;

    printf("O dígito verificador (módulo 7) é: %d\n", DigitoV);

    return 0;
}
