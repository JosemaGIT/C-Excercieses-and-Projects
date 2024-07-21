#include <stdio.h>

int main(void)
{
  float x, f;

  printf("Enter the value of x: ");
  scanf("%f", &x);

  f = 3.0f * x * x * x * x * x + 2.0f * x * x * x * x - 5.0f * x * x * x - x * x + 7.0f * x - 6.0f;
  printf("The calculated value of f is: %.2f\n", f);

  return 0;
}
