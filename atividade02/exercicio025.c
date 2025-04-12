#include <stdio.h>

int main() 
{
    int Int1, Int2, quociente, resto;

    printf("Digite o primeiro número inteiro (Int1): ");
    scanf("%d", &Int1);

    printf("Digite o segundo número inteiro (Int2): ");
    scanf("%d", &Int2);

    if (Int2 != 0)
    {
        quociente = Int1 / Int2;
        resto = Int1 % Int2;

        printf("Quociente da divisão: %d\n", quociente);
        printf("Resto da divisão: %d\n", resto);
    }
    else
    {
        printf("Erro: divisão por zero não é permitida.\n");
    }

    return 0;
}
