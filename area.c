/**
 * Author: Chris Bourke
 *
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int area, base, height;

  printf("Please enter the base of a triangle: ");

  scanf("%d", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%d", &height);

  area = 0.5 * base * height;

  printf("The area is %d square units.\n", area);

  return 0;
}
