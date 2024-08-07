#include <stdio.h>

int main(void)
{
  int item_number, day, month, year;
  float item_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price ($): ");
  scanf("%f", &item_price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d / %d / %d", &day, &month, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-.4d\n", item_number, item_price, day, month, year);

  return 0;
}
