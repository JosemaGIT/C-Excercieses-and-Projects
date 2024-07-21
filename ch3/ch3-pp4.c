#include <stdio.h>

int main(void)
{
  int first_num, second_num, third_num;
  
  printf("Enter a phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d - %d", &first_num, &second_num, &third_num);

  printf("You entered %3d.%3d.%4d\n", first_num, second_num, third_num);

  return 0;
}
