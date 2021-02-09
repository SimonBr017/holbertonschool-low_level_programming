#include "holberton.h"
/**
 *print_sign - check the sign of a number pos neg or 0
 *@n: number
 *
 *Return: returns 1 if pos 0 if nul -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
