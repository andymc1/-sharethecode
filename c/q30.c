#include <stdio.h>

int main(void){
  int i, num1, num2, soma, quad;
  
  for (i = 1000; i < 10000; i++) {
    num1 = i / 100;
    num2 = i % 100;
    soma = num1 + num2;
    quad = soma * soma;
    if (i == quad)
      printf("\n%d\t%d + %d = %d\t%d^2 = %d\n", i, num1, num2, soma, soma, quad);
  }
  return 0;
}
