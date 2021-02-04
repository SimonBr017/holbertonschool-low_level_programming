#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	while (a <= '9')
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			c = '0';
			while (c <= '9')
			{
				for (d = '0' ; d <= '9' ; d++)
				{
					if (a < c || (a == c && b < d))
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
						if (a != '9' || b != '8' || c != '9' || d != '9')
						{
							putchar(44);
							putchar(32);
						}
					}
				}
				c++;
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
