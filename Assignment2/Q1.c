// Dylan Uhryniuk
// 3126716
// Assignment 2
// Question 1

#include <stdio.h>

int main(void){
  float num, denom;

  printf("Enter a Fraction: ");
  scanf("%f /%f", &num, &denom);
  printf("As a percentage: %.2f%s \n", (num / denom)*100, "%");
  
  return 0;
}
