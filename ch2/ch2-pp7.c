#include <stdio.h>

int main(void)
{
  int amount, n20, n10, n5, n1;

  printf("Amount of money: ");
  scanf("%d", &amount);

  n20 = amount / 20;
  n10 = (amount - 20 * n20) / 10;
  n5  = (amount - 20 * n20 - 10 * n10) / 5;
  n1  = (amount - 20 * n20 - 10 * n10 - 5 * n5);

  printf("$20 dollar bills: %d\n", n20);
  printf("$10 dollar bills: %d\n", n10);
  printf("$5 dollar bills: %d\n", n5);
  printf("$1 dollar bills: %d\n", n1);

  return 0;
}
