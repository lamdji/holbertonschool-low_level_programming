#include "main.h"
/**
 * main - a function that prints the alphabet followed by a new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	/**char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	_putchar('\n');*/
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
