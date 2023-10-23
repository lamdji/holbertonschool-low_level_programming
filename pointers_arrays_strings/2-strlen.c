#include "main.h"
#include <stdio.h>
/*
 *_strlen: return of length of  
 *@s: string
 *return: length of i
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0') 
	{
	i++;
	s++;
	}
	return i;
}
