#include "holberton.h"
/**
 *_abs - returns absolute value of integer
 *
 *Return: r if r>0 0 if r=0 rx-1 if r<0
 */
int _abs(int r);
{
	if(r > 0)
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
}
