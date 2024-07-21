/* The program ask for an amount * 
 * of money and add it a 5% tax  */

#include <stdio.h>

int main(void)
{
  float ammount, taxed_ammount;

  printf("Enter an ammount: ");
  scanf("%f", &ammount);

  taxed_ammount = ammount * 1.05f;

  printf("With tax added: %.2f\n", taxed_ammount);

  return 0;
}
