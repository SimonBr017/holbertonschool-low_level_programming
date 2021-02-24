#include "holberton.h"
/**
 *factorial - return the factorial of a given number
 *@n: integer
 *Return: -1 if n<0, 1 if n=0 or n=1, or returns n*factorial(n-1)
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		return (1);
	}
	return (n * factorial(n - 1));
}
