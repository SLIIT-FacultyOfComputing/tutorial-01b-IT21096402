/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  float avg;
  printf("Enter 2 marks: ");
  scanf("%d %d", &mark1, &mark2);
  avg = (mark1 + mark2) / 2;
  printf("Average mark is: %.1f", avg);
  return 0;
}

