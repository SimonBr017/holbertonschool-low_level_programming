#include "holberton.h"
/**
 *_abs - returns absolute value of integer
 *@r: r has in integer
 *
 *Return: 0
 */
int _abs(int r);
{
	if (r > 0)
	{
		_putchar(r);
	}
	else if (r == 0)
	{
		_putchar('0');
	}
	else  /*if r<0*/
	{
		_putchar(r * -1);
	}
	return (0);
}
