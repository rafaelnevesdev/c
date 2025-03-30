#include <stdio.h>
#include <math.h>
int main()
{
    int num, quad, cub;
    printf("Informe seu numero \n");
    scanf("%d", &num);

    quad = num * num;
    cub = num * num * num;

    printf("Os Seus valores ao quadrado e ao cubo são, respectivamente: %.2d e %.2d \n", quad, cub);

    return 0;
}