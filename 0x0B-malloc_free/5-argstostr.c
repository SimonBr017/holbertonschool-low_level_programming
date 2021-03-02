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

	ac = 0;
	av = '\0';

	dest = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	return (dest);
}
