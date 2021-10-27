// Dylan Uhryniuk
// 3126716
// Assignment 4
// Question 2

#include <stdio.h>

int main( void ) {

  int input;
  printf("Number of terms to compute: ");
  scanf("%d", &input);

  float eulers_number = 0;
  for(int i=0; i < input; i++){

    float factorial = 1;
    for(int j=1; j <= i; j++){
      factorial *= j;
    }
    eulers_number += (1/factorial);
  }
  printf("%f\n", eulers_number);

  return 0;
}
