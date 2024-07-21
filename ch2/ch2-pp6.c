/* This program does the same as ch2-pp5    *
 * but applying Horner's Rule to reduce the *
 * number of multiplactions calculated to   *
 * obtain f                                 */

#include <stdio.h>

int main(void)
{
  float x, f;

  printf("Enter the value of x: ");
  scanf("%f", &x);

  f = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("The calculated value of f is: %.2f\n", f);

  return 0;
}
