#include <stdio.h>

int main() {
    float p1, p2, p3, media;
    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (p1 * 2 + p2 * 3 + p3 * 5) / 10;
    printf("Média final: %.2f\n", media);
    return 0;
}
