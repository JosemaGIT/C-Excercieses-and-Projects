#include <stdio.h>

int main(void)
{
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
  int row_sum1, row_sum2, row_sum3, row_sum4, column_sum1, column_sum2, column_sum3, column_sum4, diagonal_sum1, diagonal_sum2;
  
  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &num1 , &num2 , &num3 , &num4,
        &num5 , &num6 , &num7 , &num8,
        &num9 , &num10, &num11, &num12,
        &num13, &num14, &num15, &num16);

  printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n",
        num1 , num2 , num3 , num4,
        num5 , num6 , num7 , num8,
        num9 , num10, num11, num12,
        num13, num14, num15, num16);

  row_sum1 = num1 + num2 + num3 + num4;
  row_sum2 = num5 + num6 + num7 + num8;
  row_sum3 = num9 + num10 + num11 + num12;
  row_sum4 = num13 + num14 + num15 + num16;

  column_sum1 = num1 + num5 + num9 + num13;
  column_sum2 = num2 + num6 + num10 + num14;
  column_sum3 = num3 + num7 + num11 + num15;
  column_sum4 = num4 + num8 + num12 + num16;

  diagonal_sum1 = num1 + num6 + num11 + num16;
  diagonal_sum2 = num4 + num7 + num10 + num13;

  printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
  printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3, column_sum4);
  printf("Diagonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);

  return 0;
}
