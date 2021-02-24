#include "holberton.h"
/**
 *sqrt - find the square root
 *@n: integer
 *@x: integer
 *Return: n if x*x=n, -1 if x*x>n else returns sqrt(n, x+1)
 */
int carre(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (carre(n, x + 1));
}
/**
 *_sqrt_recursion - find the square root of n
 *@n: integer
 *Return: sqrt(n,0)
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (carre(n, 0));
}
