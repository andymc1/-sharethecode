#include <stdio.h>

int main(void){
  double c, f;

  printf("Informe a temperatura em Fahrenheit: ");
  scanf("%lf", &f);
  c = (f - 32) / 18000;
  printf("A temperatura em Celsius é %.2lf\n", c);

  return 0;
}
