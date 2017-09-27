#include <stdio.h>

int main(void){
  int a, b, c, d, nume, deno;

  printf("Informe o numerador e denominador: ");
  scanf("%d/%d %d/%d", &a, &b, &c, &d);

  nume = a * d;
  deno = b * c;

  printf("Divisão %d/%d\n", nume, deno);

  return 0;
}
