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

	if (n < 0)
		n = -1 * n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
