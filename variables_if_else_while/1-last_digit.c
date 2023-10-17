#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 *
 *Return: 0 (Always)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		{
	printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else if (n < 6 && n != 0)
	{
	printf("%d is less than 6 and not 0\n", n);
	}
	return (0);
}
