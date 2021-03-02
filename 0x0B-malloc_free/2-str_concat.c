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

	if  (s1 != 0 && s2 != 0)
	{
		s1len = _strlen(s1);
		s2len = _strlen(s2);
	}
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	dest = malloc((s1len + (s2len + 1)) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		dest[i] = s1[i];
	}
	for (i = 0; i <= s2len; i++)
	{
		dest[i + s1len] = s2[i];
	}
	dest[s1len + s2len] = '\0';
	return (dest);
}
