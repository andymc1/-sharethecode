#include <stdio.h>

int main(void){
  int dn, mn, an, da, ma, aa;

  printf("Informe a data de nascimento dd/mm/aaaa: ");
  scanf("%d/%d/%d", &dn, &mn, &an);
  printf("Informe a data atual dd/mm/aaaa: ");
  scanf("%d/%d/%d", &da, &ma, &aa);

  if(da >= dn){
    da = da - dn;
  }
  else{
    da = dn - da;
  }

  if(ma >= mn){
    ma = ma - mn;
  }
  else{
    ma = mn - ma;
  }
  
  aa = aa - an;

  printf("%d Dia(s), %d Mes(es), %d Ano(s)\n", da, ma, aa);

  return 0;
}
