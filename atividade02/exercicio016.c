#include <stdio.h>
int main()
{
  int VariA, VariB, Vari;
  printf("Indique o valor da variavel A \n");
  scanf("%d", &VariA);
  printf("Indique o valor da variavel B \n");
  scanf("%d", &VariB);
  Vari = VariA;
  VariA = VariB;
  VariB = Vari;
  printf("Suas variaveis invertidas sao VariA %d e VariB %d", VariA, VariB);
  return 0;
}