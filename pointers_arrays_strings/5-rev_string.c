#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string s
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)

{
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')

	end++;

	end--;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}
