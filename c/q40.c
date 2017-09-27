#include <stdio.h>
#include <math.h>

int main(void){
  int aux = 0, x, i, k = 2, acum = 0;
  float p;

  printf("Informe o valor: ");
  scanf("%d", &x);

  while(aux != p){
    p = pow(x, 1.0 / k);
    aux = p;
    k++;
  }

  for(i = 1; i <= aux; i++)
    if(aux % i == 0)
      acum++;
  if(acum == 2)
    printf("É uma potência prima\n");
  else
    printf("Não é uma potência prima\n");

  return 0;
}
