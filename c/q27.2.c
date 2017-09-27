#include <stdio.h>

int main(void){
  int n, i = 1, deno = 2;

  printf("Informe o limite: ");
  scanf("%d", &n);

  if(n != 0){
    printf("1\n");

    while(i < n){
      if(deno % 2 == 0)
        printf("-1/%d\n", deno);
      else
        printf("1/%d\n", deno);
      deno++;
      i++;
    }
  }

  return 0;
}
