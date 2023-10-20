#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line
 *
 *Return: 0 (Always)
 */
int main(void)
{
	char mot[] = "_putchar";
	int i = 0;

	while (mot[i] != '\0')
	{
	_putchar(mot[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
