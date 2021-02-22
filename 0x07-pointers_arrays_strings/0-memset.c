#include "holberton.h"
/**
 * *_memset - fill the memory with a constant
 *@s: pointer
 *@n: size of the array
 *@b: the constant byte
 *Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
