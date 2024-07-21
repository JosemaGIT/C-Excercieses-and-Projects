/* This program was supposed to send an error        *
 * but gcc-14 understand that if no return statement *
 * is given, the usual return 0 is placed as a       *
 * standard value for the main function return       */

#include <stdio.h>

int main(void)
{
  printf("Hello, World\n");
}
