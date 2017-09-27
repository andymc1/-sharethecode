#include <stdio.h>

int main(void){
  int a, b, c;

  printf("Informe o primeiro número: ");
  scanf("%d", &a);
  printf("Informe o segundo número: ");
  scanf("%d", &b);
  printf("Informe o terceiro número: ");
  scanf("%d", &c);

  if((a > b) && (a > c)){
    printf("%d é o maior\n", a);
  }
  else if((b > a) && (b > c)){
    printf("%d é o maior\n", b);
  }
  else if((c > a) && (c > b)){
    printf("%d é o maior\n", c);
  }
  return 0;
}
