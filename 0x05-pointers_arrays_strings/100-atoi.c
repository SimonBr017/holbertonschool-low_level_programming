#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an intege
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int symbol = 1;
	int length = 0;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (s[length] == '-')
		{
			symbol *= -1;
		}
		else if (s[length] >= '0' && s[length] <= '9')
		{
			result = ((result * 10) + s[length]) - '0';
		}
		else if (result > 0)
			break;
	}
	return (result * symbol);
}
