#include <stdio.h>

int main (void)
{
  // a)
  int i = 3, j = 4, k=5;
  printf("a)\n");
  printf("%d\n", i < j || ++j <k);
  printf("%d %d %d\n", i, j, k);
  
  // b)
  i = 7; j = 8; k = 9;
  printf("b)\n");
  printf("%d\n", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);
  
  // c)
  i = 7; j = 8; k = 9;
  printf("c)\n");
  printf("%d\n", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);
 
  // d)
  i = 1; j = 1; k = 1;
  printf("c)\n");
  printf("%d\n", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  return 0;
}
