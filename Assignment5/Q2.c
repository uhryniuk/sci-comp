/**
  Dylan Uhryniuk
  3126716
  Asignment 5
  Question 2


  (a) short int:
  (b) int: 12
  (c) long int:
  (d) double:
*/

#include <stdio.h>

int main(void){
  int input;
  printf("Enter a number: ");
  scanf("%d", &input);

  int factorial = 1;
  for(int i = 1; i < input+1; i++){
    factorial *= i;
  }

  if(input == 0){
    printf("The factorial of 0 is 1");
  }
  else printf("Factorial of %d is %d \n", input, factorial);

  return 0;
}
