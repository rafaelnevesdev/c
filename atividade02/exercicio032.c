#include <stdio.h>

int main() {
    int N;
    printf("Digite o número N: ");
    scanf("%d", &N);

    if (N <= 10)
        printf("F1\n");
    else if (N <= 100)
        printf("F2\n");
    else
        printf("F3\n");

    return 0;
}