#include "main.h"
#include "main.c"

/**
 * main - a function that prints the alphabet followed by a new line
 *
 * Return: 0 (Always)
 */
	int main(void)
{
	char a = 'a';
	char z = 'z';

	for (char abc = a ; abc <= z; abc++)
	{
	_putchar(abc);
	}

	_putchar('\n');
	return (0);
}
