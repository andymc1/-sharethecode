#include <stdio.h>

int main(void){
  int a, b, c;
  
  printf("Digite os pesos 'A', 'B' e 'C': ");
  scanf("%d %d %d", &a, &b, &c);
  
  if(a == b){
    printf("A esfera 'C' é diferente\a\n");
  }
  else if(a == c){
    printf("A esfera 'B' é diferente\a\n");
  }
  else{
    printf("A esfera 'A' é diferente\a\n");
  }

  return 0;
}
