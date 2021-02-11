#include "holberton.h"

/**
 *print_line - print _ n times
 *@n : number of time print _
 *Return: print n time_
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
