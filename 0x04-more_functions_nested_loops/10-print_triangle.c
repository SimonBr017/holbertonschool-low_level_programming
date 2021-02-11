#include "holberton.h"

/**
 *print_triangle - print a triangle with #
 *@size: size of the triangle
 *Return: returns a triangle made with #
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < (size - i - 1) ; j++)
			{
				_putchar(' ');
			}
			for (k = 0 ; k < (size - j) ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
