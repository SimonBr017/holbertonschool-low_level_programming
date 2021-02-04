#include <stdio.h>

/**
 * main - Entry point, commentaire
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n, c;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
