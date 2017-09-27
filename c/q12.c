#include <stdio.h>

int main(void){
  int parc;
  float valor, ent;
  
  printf("Informe o valor do produto: ");
  scanf("%f", &valor);
  (int) valor;

  parc = valor / 3;
  ent = valor - (2 * parc);

  printf("Entrada: %.2f\n1ª Parcela: %d / 2ª Parcela: %d\n", ent, parc, parc);

  return 0;
}
