#include <stdio.h>

int main(void){
  int val, aux, n50, n10, n5, n1;

  printf("Informe o valor: ");
  scanf("%d", &val);
  aux = val;
  n50 = aux / 50;
  aux = aux % 50;
  n10 = aux / 10;
  aux = aux % 10;
  n5 = aux / 5;
  n1 = aux % 5;

  printf("%d nota(s) de 50 reais\n", n50);
  printf("%d nota(s) de 10 reais\n", n10);
  printf("%d nota(s) de 5 reais\n", n5);
  printf("%d nota(s) de 1 real\n", n1);
  return 0;
}
