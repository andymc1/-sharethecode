#include <stdio.h>

int main(void){
  int num;

  printf("Informe um número: ");
  scanf("%d", &num);

  if(num % 2 == 0){
    if(num % 4 == 0)
      printf("Quadrado perfeito\n");
    else
      printf("Não é quadrado perfeito\n");
  }
  else{
    if(num % 8 == 1)
      printf("Quadrado perfeito\n");
    else
      printf("Não é quadrado perfeito\n");
  }

  return 0;
}
