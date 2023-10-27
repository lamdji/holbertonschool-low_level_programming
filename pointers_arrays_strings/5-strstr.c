#include "main.h"
#include <stdio.h>
/**
 * _strstr - function finds the first occurrence of the substring
 * @needle - the substringe in the string haystack
 * @haystack - the string
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')

	{
		return (haystack);

	}
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
