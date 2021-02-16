#include "holberton.h"
/**
 *print_rev - print a string in reverse
 *@s: string
 *Return: print the string in reverse to stdout
 */
void print_rev(char *s)
{
	int i, len;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
