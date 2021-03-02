#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - size of a string
 *@s: string
 *Return: lengh of the string
 */
char _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
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

	dest = malloc((_strlen(str) + 1) * sizeof(char));
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
