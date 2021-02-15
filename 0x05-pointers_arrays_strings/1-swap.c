#include "holberton.h"
/**
 *swap_int - swap the value of two integer
 *@a: integer
 *@b: integer
 *Return: the value of the swaped integer
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
