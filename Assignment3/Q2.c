// Dylan Uhryniuk
// 3126716
// Assignment 3
// Question 2
#include <stdio.h>

int main(void){
  int year_one, month_one, day_one;
  int year_two, month_two, day_two;

  printf("Enter the first date (yyyy-mm-dd): ");
  scanf("%d -%d -%d", &year_one, &month_one, &day_one);

  printf("Enter the second date (yyyy-mm-dd): ");
  scanf("%d-%d-%d", &year_two, &month_two, &day_two);

  if(year_one == year_two){

    if(month_one == month_two){

      if(day_one == day_two){
        printf("Those are the same date!\n");

      } else if(day_one > day_two){
        printf("The date %d-%d-%d is later than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);
      } else printf("The day %d-%d-%d is earlier than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);

    } else if(month_one > month_two){
      printf("The date %d-%d-%d is later than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);
    } else printf("The date %d-%d-%d is earlier than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);

  } else if(year_one > year_two){
    printf("The date %d-%d-%d is later than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);
  } else printf("The date %d-%d-%d is earlier than %d-%d-%d\n", year_one, month_one, day_one, year_two, month_two, day_two);

  return 0;
}
