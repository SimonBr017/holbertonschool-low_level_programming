#include "holberton.h"

/**
 *print_most_numbers - print number from 0 to 9 exept 2 and 4
 *
 *Return: num from 0 to ç exept 2and 4
 */
void print_most_numbers(void)
{
	int nb;

	for (nb = '0' ; nb <= '9' ; nb++)
	{
		if (nb == '2' || nb == '4')
		{
			nb++;
		}
		_putchar(nb);
	}
	_putchar('\n');
}
