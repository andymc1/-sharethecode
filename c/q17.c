#include <stdio.h>

int main(void){
  float num, n2;
  int n_fim;

  printf("Informe o número: ");
  scanf("%f", &num);

  n2 = num - (int) num;
  if(n2 >= 0.5)
    n_fim = (int) num + 1;
  else
    n_fim = (int) num;

  printf("O resultado é %d\n", n_fim);

  return 0;
}
