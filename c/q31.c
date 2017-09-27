#include <stdio.h>

int main(void){
  int num1, num2, inv1, inv2;
  
  for (num1 = 10; num1 < 100; num1++){
    inv1 = (num1 % 10) * 10 + num1 / 10;
    for (num2 = 10; num2 < 100; num2++){
      inv2 = (num2 % 10) * 10 + num2 / 10;
      if (num1 * num2 == inv1 * inv2)
        printf("\n%d x %d = %d x %d = %d\n", num1, num2, inv1, inv2, num1 * num2);
    }
  }
  return 0;
} 
