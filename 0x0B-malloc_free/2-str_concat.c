#include "holberton.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - concatenates two strings
 *@s1: string
 *@s2: string
 *Return: null on failure, pointer to dest
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *dest;

	i = strlen(s1);
	j = strlen(s2);

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	dest = malloc((i + j) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dest[i + j] = s2[j];
	}
	return (dest);
}
