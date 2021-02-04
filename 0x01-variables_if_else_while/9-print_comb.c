#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
		if (n < '9')
		{
			putchar(44);/*code ASCII for ','*/
			putchar(32);/*code ASCII for 'SPACE'*/
		}
	}
	putchar('\n');
	return (0);
}
