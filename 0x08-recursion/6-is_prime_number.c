#include "holberton.h"
/**
 *checker - check for prime number
 *@n: integer
 *@x: integer
 *Return: returns 1 if n is a primNum (n=x), returns 0 if not (n%x=0)
 */
int checker(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (checker(n, x + 1));

}
/**
 *is_prime_number - check for prime number
 *@n: integer
 *Return: checker(n, 2)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (checker(n, 2));
}
