 #include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @size: the size of the memory to print
 * @c: char who intialize the array
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)

{
	char *new_array;
	unsigned int i;

	new_array = malloc(sizeof(char) * size);

	if (new_array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		new_array[i] = c;
	}
		return (new_array);
}
