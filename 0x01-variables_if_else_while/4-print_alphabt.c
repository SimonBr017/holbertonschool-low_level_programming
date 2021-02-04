#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char u;

	for (u = 'a' ; u <= 'z' ; u++)
	{
		if (u == 'q' || u == 'e')
		{
			u++;
		}
		putchar(u);
	}
	putchar('\n');
	return (0);
}
