#include <stdio.h>

int main(void)
{
  int GS1_prefix, Group_Identifier, Publisher_Code, Item_number, Check_digit;
  
  printf("Enter ISBN: ");
  scanf("%d - %d - %d - %d - %d", &GS1_prefix, &Group_Identifier, &Publisher_Code, &Item_number, &Check_digit);

  printf("GS1 prefix:\t\t%-d\n", GS1_prefix);
  printf("Group identifier:\t%-d\n", Group_Identifier);
  printf("Publisher code:\t\t%-d\n", Publisher_Code);
  printf("Item number:\t\t%-d\n", Item_number);
  printf("Check digit:\t\t%-d\n", Check_digit);

  return 0;
}
