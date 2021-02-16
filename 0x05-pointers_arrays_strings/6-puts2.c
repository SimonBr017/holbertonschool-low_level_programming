#include "holberton.h"
/**
 *puts2 - print from the first charactere then skip 1/2
 *@str: string
 *Return: print the result
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
