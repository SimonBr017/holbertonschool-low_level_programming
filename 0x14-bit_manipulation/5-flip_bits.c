#include "holberton.h"
/**
 * count - fuction to count
 *@n: number
 *Return: un truc
 */
int count(unsigned long int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n & 1)
		return (count(n >> 1) + 1);
	else
		return (count(n >> 1));
}
/**
 * flip_bits - flip les bits
 *@n: num
 *@m: num2
 *Return: the number of bits to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c;

	c = n ^ m;
	return (count(c));
}
