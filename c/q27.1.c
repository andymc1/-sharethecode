#include <stdio.h>

int main(void){
  int n, i = 0, num = 1, deno = 2;

  printf("Informe a quantidade de termos: ");
  scanf("%d", &n);
  
  while(i < n){
    printf("%d/%d\n", num, deno);
    num += 2;
    deno += 3;
    i++;
  }
  return 0;
}
