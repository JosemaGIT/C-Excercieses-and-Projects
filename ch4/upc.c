/* A program that calculates the check  *
 * digit that an UPC bar code must have */

#include <stdio.h>

int main(void)
{
  int i01, i02, i03, i04, i05, i06, i07, i08, i09, i10, i11, chk_dg;

  printf("Enter the first digit: ");
  scanf("%1d", &i01);
  printf("Enter the first group of five digits: ");
  scanf("%1d %1d %1d %1d %1d", &i02, &i03, &i04, &i05, &i06);
  printf("Enter the second group of five digits: ");
  scanf("%1d %1d %1d %1d %1d", &i07, &i08, &i09, &i10, &i11);

  chk_dg = 9 - (3 * (i01 + i03 + i05 + i07 + i09 + i11) + i02 + i04 + i06 + i08 + i10 - 1) % 10;

  printf("Check digit: %d\n", chk_dg);

  return 0;
}
