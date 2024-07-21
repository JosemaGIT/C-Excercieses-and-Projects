/* This program transforms a decimal number into its *
 * corresponding octal of a maximum of 5 digits      */

#include <stdio.h>

int main(void)
{
  int in, out;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &in);

  out  = in % 8;
  out += (in /= 8) % 8 * 10;
  out += (in /= 8) % 8 * 10 * 10; 
  out += (in /= 8) % 8 * 10 * 10 * 10;
  out += (in /= 8) % 8 * 10 * 10 * 10 * 10; 

  printf("In octal, your number is: %.5d\n", out);

  return 0;
}
