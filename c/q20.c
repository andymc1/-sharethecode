#include <stdio.h>

int main(void){
  int la, lb, lc;
  
  printf("Informe os lados: ");
  scanf("%d %d %d", &la, &lb, &lc);

  if((la == lb) && (la == lc) && (lb == lc)){
    printf("Triângulo equilátero\n");
  }
  else if((la == lb && la != lc) || (la == lc && la != lb) || (lb == lc && la != lc)){
    printf("Triângulo isóceles\n");
  }
  else if(la != lb && la != lc && lb != lc){
    printf("Triângulo escaleno\n");
  }
  return 0;
}
