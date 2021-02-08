#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10 times to stdout with new line
 *
 *Return : no return
 */
void print_alphabet_x10(void)
{
	int a, c;

	for (a = '0' ; a <= '9' ; a++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
