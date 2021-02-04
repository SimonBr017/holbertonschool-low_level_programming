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

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0'); /*modulo 10*/
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(44);
				putchar(32);
			}
			b++;
		}
		a++;
	}
	return (0);
}
