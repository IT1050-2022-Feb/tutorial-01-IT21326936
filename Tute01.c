/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1, sub2, Avg;

  printf("Enter the marks of subject 1 :\n");
  scanf("%f", &sub1);

  printf("Enter the marks of subject 2 :\n");
  scanf("%f", &sub2);

  Avg = (sub1 + sub2) / 2;

  printf("Average : %.2f\n", Avg);
  
  return 0;
}

