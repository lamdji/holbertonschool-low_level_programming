#include "main.h"

/**
 *
 *
 *
 */
int is_number_recursive(int n, int i)
{
		if (i / i == n)
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
