/* This is a modification of the program that reverses the order *
 * of the digits of a three-digit number entered by the user     */

#include <stdio.h>

int main(void)
{
  int i1, i2, i3;

  printf("Enter a three-digit number: ");
  scanf("%1d %1d %1d", &i1, &i2, &i3);

  printf("The reversal is: %1d%1d%1d\n", i3, i2, i1);

  return 0;
}
