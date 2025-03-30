#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);

    resultado = (A + B) * (A + B);

    printf("O resultado é: %d\n", resultado);
    
    return 0;
}
