#include <stdio.h>

int main (void)
{
	int age = 20, teenager;
	age >= 13 && age <= 19 ? (teenager = 1) : (teenager = 0);

	printf("%d\n", teenager);

	return 0;
}
