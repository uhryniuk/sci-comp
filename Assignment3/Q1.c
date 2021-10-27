// Dylan Uhryniuk
// 3126716
// Assignment 3
// Question 1

#include <stdio.h>

int main(void){
  int input;

  printf("Enter an integer to see whether it is odd or even: ");
  scanf("%d", &input);

  if(input % 2 == 1) printf("%d is odd!\n", input);
  else printf("%d is even!\n", input);
  
  return 0;
}
