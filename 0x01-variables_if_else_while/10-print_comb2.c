#include <stdio.h>

/**
 * main - Entry point
 * while to creat boucle
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		int dc = '0';

		while (dc <= '9')
		{
			putchar(d);
			putchar(dc);
			if (d != '9' || dc != '9')
			{
				putchar(44);
				putchar(32);
			}
			dc++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
