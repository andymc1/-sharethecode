#include <stdio.h>

int main(void){
  int n, k, soma = 0, i;
  
  printf("Informe o limite: ");
  scanf("%d", &n);
  
  for (k = 1; k < n; k++){
    soma = 0;
    for (i = 1; i < k; i++)
      if (k % i == 0)
        soma += i;
    if (k == soma)
      printf("%d é perfeito\n", k);
  }
  return 0;
}
