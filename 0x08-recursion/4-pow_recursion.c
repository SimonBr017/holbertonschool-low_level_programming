#include "holberton.h"
/**
 *_pow_recursion - value of x power of y
 *@x: integer
 *@y: integer
 *Return: -1 if y<0, 1 if y=0, else returns x*_pow(x, y-1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
