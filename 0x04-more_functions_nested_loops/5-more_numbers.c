#include "holberton.h"

/**
 *more_numbers - print from 0 to 14 10x with new line
 *
 *Return: returns nb 10 times
 */
void more_numbers(void)
{
	int a, nb;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (nb = 0 ; nb <= 14 ; nb++)
		{
			if (nb >= 10)
			{
				_putchar('0' + nb / 10);
			}
			_putchar('0' + nb % 10);
		}
		_putchar('\n');
	}
}
