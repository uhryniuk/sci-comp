// Dylan Uhryniuk
// 3126716
// Assignment 2
// Question 3

#include <stdio.h>

int main(void){
  float x;

  printf("Enter a value for x: ");

  scanf("%f", &x);
  float polynomial_eval = (((((((16*x)+8)*x)+4)*x)+2)*x)+1;
  
  printf("The polynomial evaluates to: %f\n", polynomial_eval);
  return 0;
}
