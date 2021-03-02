#include "holberton.h"
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
	int s1len = 0;
	int s2len = 0;
	int i;
	char *dest;

	if  (s1 != NULL)
	{
		while (s1[s1len] != '\0')
		{
			s1len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2len] != '\0')
		{
			s2len++;
		}
	}
	dest = malloc((s1len + s2len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		dest[i] = s1[i];
	}
	for (i = 0; i < s2len; i++)
	{
		dest[i + s1len] = s2[i];
	}
	dest[s1len + s2len] = '\0';
	return (dest);
}
