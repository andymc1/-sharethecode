#include <stdio.h>

int main(void){
  int n, i, num, lim;

  printf("Informe o número desejado: ");
  scanf("%d", &n);
  printf("Informe o limite: ");
  scanf("%d", &lim);

  for(i = 1; i < lim; i++){
    if(i % n == 0){
      num = i;
    }
  }
  printf("O maior é %d\n", num);

  return 0;
}
