#include "main.h"
#include <stdio.h>

/**
 * _strlen - simimlar function that returns the length of a string
 * @s: string to evaluate
 *
 * return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')

	{
	i++;
	s++;
	}

	return (i);
}
