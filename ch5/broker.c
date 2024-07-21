#include <stdio.h>

int main(void)
{
  float value, commission;

  printf("Enter value of trade: ");
  scanf("%f", &value);

  if (value <= 2500)
    commission = 30 + 0.017f * value;
  else if (value <= 6250)
    commission = 56 + 0.0066f * value;
  else if (value <= 20000)
    commission = 76 + 0.0034f * value;
  else if (value <= 50000)
    commission = 100 + 0.0022f * value;
  else if (value <=500000)
    commission = 155 + 0.0011f * value;
  else
    commission = 100 + 0.0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission: %f\n", commission);

  return 0;
}
