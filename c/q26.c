#include <stdio.h>

int main(void){
  int n, i = 0, t = 0;

  printf("Informe a quantidade: ");
  scanf("%d", &n);

  while(i < n){
    t = t + (i * i);
    i++;
  }
  printf("A soma do quadrado dos %d primeiros números naturais é %d\n", n, t);
  return 0;
}
