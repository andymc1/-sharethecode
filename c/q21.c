#include <stdio.h>
#include <math.h>

int main(void){
  float a, b, c, hipo, cat1, cat2;

  printf("Informe 'A', 'B' e 'C': ");
  scanf("%f %f %f", &a, &b, &c);

  if(a > b && a > c){
    hipo = a;
    cat1 = b;
    cat2 = c;
  }
  else if(b > a && b > c){
    hipo = b;
    cat1 = a;
    cat2 = c;
  }
  else if(c > a && c > b){
    hipo = c;
    cat1 = a;
    cat2 = b;
  }

  if(pow(hipo,2) == pow(cat1,2) + pow(cat2,2))
    printf("É um triângulo retângulo\n");
  else
    printf("Não é um triângulo retângulo\n");

  return 0;
}
