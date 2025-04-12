#include <stdio.h>

int main() {
    int A, B;
    printf("Digite dois números A e B: ");
    scanf("%d %d", &A, &B);

    if (A > B)
        printf("Maior número: %d\n", A);
    else
        printf("Maior número: %d\n", B);
    return 0;
}
