#include "main.h"
/**
 *  '_sqrt_recursive' - calculates i**i to check with n.
 * @n: base number.
 * @i: iterator number.
 *  '_sqrt_recursion' - calculates the natural square root of n
 */

int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
		else
	{
	return (_sqrt_recursive(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	if (n == 1)
	{
		return (n);
	}
		return (_sqrt_recursive(n, 2));
}
