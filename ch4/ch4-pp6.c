/* This program obtains the Check Digit of an European *
 * Article Number (EAN) out of its first 12 digits     */

#include <stdio.h>

int main(void)
{
  int i01, i02, i03, i04, i05, i06, i07, i08, i09, i10, i11, i12, chk_dg;

  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &i01, &i02, &i03, &i04, &i05, &i06, &i07, &i08, &i09, &i10, &i11, &i12);

  chk_dg = 9 - (i01 + i03 + i05 + i07 + i09 + i11 + 3 * (i02 + i04 + i06 + i08 + i10 + i12) - 1) % 10;

  printf("Check digit: %d\n", chk_dg);

  return 0;
}
