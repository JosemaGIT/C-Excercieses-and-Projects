/* This Program Revers the order of the digits of a *
 * two-digit number entered by the user             */

#include <stdio.h>

int main(void)
{
  int in, out;

  printf("Enter a two-digit number: ");
  scanf("%d", &in);

  printf("The reversal is: %d\n", in % 10 * 10 + in / 10);

  return 0;
}
