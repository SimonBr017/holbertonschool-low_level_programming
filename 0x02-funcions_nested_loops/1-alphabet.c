#include "holberton.h"
/**
 * print_alphabet: print alphabet to sdtout ending with new line 
 *
 * Return: no returns
 */
void print_alphabet(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
