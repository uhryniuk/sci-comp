/**
  Dylan Uhryniuk
  3126716
  Asignment 5
  Question 3
*/
#include <stdio.h>

int main(void){
  int to_reverse;
  printf("Enter a number: ");
  scanf("%d", &to_reverse);

  printf("Reverse of %d is: ", to_reverse);
  do {
    int current_number = to_reverse % 10;
    printf("%d", current_number);
    to_reverse /= 10;

  } while(to_reverse > 0);
  printf("\n");

  return 0;
}
