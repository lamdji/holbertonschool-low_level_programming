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

	printf("Last digit of %d is %d", n, n % 10)
		;
	if (n % 10 > 5)
		{
	printf("Last digit of %d is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
	printf("The last digit is %d is 0\n", n);
	}
	else if (n % 10 < 6 && n != 0)
	{
	printf("Last digit is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
