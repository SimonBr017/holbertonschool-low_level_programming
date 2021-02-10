#include "holberton.h"
/**
 *print_last_digit - print the last digit of a int n
 *@n: integer
 *
 *Return: returns r value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
	x = -x;
	}
	_putchar(x + '0');
	return (x);
}
