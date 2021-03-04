#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the argument of your prog
 *@ac: number of arg
 *@av: arg vecteur
 *Return: pointer to a new string, or null if fail
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	int i, j;
	int k = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		size = size + _strlen(av[i]);

	dest = malloc((size + 1 + ac) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k] = av[i][j];
			k++;
		}
		dest[k++] = '\n';
	}
	dest[k] = '\0';
	return (dest);
}

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	return (i);
}
