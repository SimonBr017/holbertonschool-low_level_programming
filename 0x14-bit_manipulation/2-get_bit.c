#include "holberton.h"
/**
 *get_bit - return the value of a bit at a given index
 *@n: num
 *@index: index
 *Return: the vlue of the bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return((n & 1));
}
