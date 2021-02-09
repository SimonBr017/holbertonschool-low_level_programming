#include "holberton.h"
/**
 *print_last_digit - print the last digit of a int r
 *@r: integer
 *@a: the last digit
 *Return: returns r value of the las digit
 */
int print_last_digit(int r);
{
	int a;

	if (r >= 0)
	{
		a = r % 10;
	}
	else
	{
		a = -r % 10;
	}
	_putchar(a + '0');
	return (a);
}
