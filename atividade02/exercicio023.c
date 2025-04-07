#include <stdio.h>

int main() 
{
    int NumA, NumB;

    printf("Digite o primeiro número: ");
    scanf("%d", &NumA);

    printf("Digite o segundo número: ");
    scanf("%d", &NumB);

    printf("Ordem inversa: %d %d\n", NumB, NumA);

    return 0;
}
