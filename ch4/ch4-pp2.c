/* This program reverses the order of the digits of a * 
 * three-digit number entered by the user             */

#include <stdio.h>

int main(void)
{
  int in, out;

  printf("Enter a three-digit number: ");
  scanf("%d", &in);

  printf("The reversal is: %d\n", in % 10 * 100 + in / 100 + (in - in / 100 * 100 - in % 10));

  return 0;
}
