#include "holberton.h"
/**
 *print_last_digit - print the last digit of a int r
 *@n: integer
 *
 *Return: returns r value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
	n = -n;
	}
	_putchar(x + '0');
	return (x);
}
