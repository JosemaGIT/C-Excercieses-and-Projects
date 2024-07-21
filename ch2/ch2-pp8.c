#include <stdio.h>

int main(void)
{
  float loan, interest, month_payment, first_month_balance, second_month_balance, third_month_balance;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &month_payment);

  first_month_balance = loan * (1 + interest / 1200) - month_payment;
  second_month_balance = first_month_balance * (1 + interest / 1200) - month_payment;
  third_month_balance = second_month_balance * (1 + interest / 1200) - month_payment;

  printf("Balance remaining after first payment: %.2f\n", first_month_balance);
  printf("Balance remaining after second payment: %.2f\n", second_month_balance);
  printf("Balance remaining after third payment: %.2f\n", third_month_balance);

  return 0;
}
