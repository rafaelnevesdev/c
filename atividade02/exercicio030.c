#include <stdio.h>

int main() {
    int matricula, ano, semestre;

    printf("Digite o número de matrícula (formato AASDDD): ");
    scanf("%d", &matricula);

    ano = matricula / 1000;
    semestre = (ano % 10);
    ano = ano / 10;

    printf("Ano da matrícula: 20%02d\n", ano);
    printf("Semestre: %dº semestre\n", semestre);

    return 0;
}
