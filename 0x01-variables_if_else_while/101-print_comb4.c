#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0'; /*declare variable a and a=0*/
	int b; /*declare variable b*/
	int c;

	while (a <= '7')
	{
		b = a + 1; /*b always different from a and alway one more than a*/
		while (b <= '8') /*run boucle b in a till b=8*/
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a); /*print a*/
				putchar(b); /*print b after a so ab*/
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
					putchar('\n'); /*so if 89 print new line*/
				}
				else /* if(false) a!=8 & b!=9 so if ab!=89*/
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
