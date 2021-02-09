#include "holberton.h"
/**
 *_abs - returns absolute value of integer
 *@r: r has in integer
 *
 *Return: --r for r!=0
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
		return(-r);
}
