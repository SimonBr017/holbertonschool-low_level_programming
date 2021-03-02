#include "holberton.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - return a pointer to a copy of the string
 *@str: string
 *Return: poiter to dest or NULL
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dest = malloc(strlen(str) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
