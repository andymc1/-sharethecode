#include <stdio.h>
#include <math.h>

int main(void){
  int n, i, i2, i3 = 1;
  double med = 1.0, vet[10];

  printf("Informe a quantidade de números: ");
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    printf("Informe o %dº valor: ", i3);
    scanf("%lf", &vet[i]);
    i3++;
  }

  for(i2 = 0; i2 < n; i2++){
    med *= vet[i2];
  }
  med = pow(med, 1.0/n);
  printf("A média geométrica é %.2lf\n", med);

  return 0;
}
