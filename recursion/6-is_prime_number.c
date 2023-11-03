#include "main.h"

/**
 * is_number_recursive - look for multipliers of n.
 * @n: base number.
 * @i: iterator number.
 * Return: 1 if n is prime, 0 otherwise
 */
int is_number_recursive(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
}

/**
 * is_prime_number - check if n is prime
 * @n: base number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n <= 2)
	return (0);
	return (is_number_recursive(n, 2));
}
