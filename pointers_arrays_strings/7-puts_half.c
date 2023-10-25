#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
	length++;
	}
	start = (length + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
