#include <stdio.h>

int main(void){
  int a, b;

  printf("Digite os valores de 'A' e 'B': ");
  scanf("%d %d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("A = %d, B = %d\n", a , b);

  return 0;
}
