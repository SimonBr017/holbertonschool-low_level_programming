#include "holberton.h"
/**
 *clear_bit - set the value of a bit to 1 at a giv index
 *@n: num
 *@index: index
 *Return: the vlue of the bit at index, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
