#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet followed by a new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
