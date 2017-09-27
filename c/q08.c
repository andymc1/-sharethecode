#include <stdio.h>

int main(void){
  int a, b, res;

  printf("Informe os números: ");
  scanf("%d/%d", &a, &b);

  res = a - b;
  while(res > b){
    res = a - b;
  }
  printf("O resultado é %d\n", res);
  return 0;
}
