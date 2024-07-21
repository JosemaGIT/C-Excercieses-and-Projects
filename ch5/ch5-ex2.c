#include <stdio.h>

int main (void)
{
  // a)
  int i = 10, j = 5, k;
  printf("a) %d\n",!i < j);
  
  // b)
  i = 2; j = 1;
  printf("b) %d\n", !!i + !j);
  
  // c)
  i = 5; j = 0; k = -5;
  printf("c) %d\n", i && j || k);
 
  // d)
  i = 1; j = 2; k = 3;
  printf("d) %d\n", i < j || k);

  return 0;
}
