// Dylan Uhryniuk
// 3126716
// Assignment 4
// Question 1

#include <stdio.h>

int main( void ) {
  int input;
  printf("Enter a two-digit number: ");
  scanf("%d", &input);
  int first_digit = input / 10;
  int second_digit = input % 10;


  if(first_digit == 0){
    switch (second_digit) {
      case 0: printf("zero\n");
        break;
      case 1: printf("one\n");
        break;
      case 2: printf("two\n");
        break;
      case 3: printf("three\n");
        break;
      case 4: printf("four\n");
        break;
      case 5: printf("five\n");
        break;
      case 6: printf("six\n");
        break;
      case 7: printf("seven\n");
        break;
      case 8: printf("eight\n");
        break;
      case 9: printf("nine\n");
    }
  }
  else if(first_digit == 1){
    switch (second_digit) {
      case 0: printf("ten\n");
        break;
      case 1: printf("eleven\n");
        break;
      case 2: printf("tweleve\n");
        break;
      case 3: printf("thirteen\n");
        break;
      case 4: printf("fourteen\n");
        break;
      case 5: printf("fifteen\n");
        break;
      case 6: printf("sixteen\n");
        break;
      case 7: printf("seventeen\n");
        break;
      case 8: printf("eighteen\n");
        break;
      case 9: printf("nineteen\n");
    }
  }
  else {
    switch (first_digit) {
      case 2: printf("twenty");
        break;
      case 3: printf("thirty");
        break;
      case 4: printf("forty");
        break;
      case 5: printf("fifty");
        break;
      case 6: printf("sixty");
        break;
      case 7: printf("seventy");
        break;
      case 8: printf("eighty");
        break;
      case 9: printf("ninety");
    }
    switch (second_digit) {
      case 0: printf("\n");
        break;
      case 1: printf("-one\n");
        break;
      case 2: printf("-two\n");
        break;
      case 3: printf("-three\n");
        break;
      case 4: printf("-four\n");
        break;
      case 5: printf("-five\n");
        break;
      case 6: printf("-six\n");
        break;
      case 7: printf("-seven\n");
        break;
      case 8: printf("-eight\n");
        break;
      case 9: printf("-nine\n");
    }
  }

  return 0;
}
