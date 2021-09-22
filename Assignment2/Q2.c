// Dylan Uhryniuk
// 3126716
// Assignment 2
// Question 2

#include <stdio.h>
#include <math.h>

#define  PI 3.14159

int main(void){
  float radius;

  printf("What is the radius of the sphere?: ");
  scanf("%f", &radius);
  printf("The volume of the sphere is: %f\n", ((4.0/3.0)*PI)*(pow(radius, 3)));

  return 0;
}
