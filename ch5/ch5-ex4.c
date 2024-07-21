#include <stdio.h>

int main (void)
{
  int i, j;
  
  i = j = 2;

  printf("%d\n", i<j?-1:i>j?1:0);
}
