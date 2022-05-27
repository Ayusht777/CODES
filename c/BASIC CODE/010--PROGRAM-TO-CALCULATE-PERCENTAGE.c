
#include <stdio.h>
int main(){
  printf("The Percentage calculator");
  float a,p;
  printf("\nType the value :");

  scanf("%f",&a);
  printf("Discount:");
  scanf("%f",&p);
  float x = a/100*p;
  float z = a - x;
  printf("The final Price  %.2f",z);
  return 0;
}
