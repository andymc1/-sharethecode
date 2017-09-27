#include <stdio.h>

int main(void){
  int s, hora, min, seg;

  printf("Informe o tempo em segudos: ");
  scanf("%d", &s);
  
  hora = s / 3600;
  min = s / 60 - hora;
  seg = s % 60;

  printf("%d:%d:%d\n", hora, min, seg);

  return 0;
}
