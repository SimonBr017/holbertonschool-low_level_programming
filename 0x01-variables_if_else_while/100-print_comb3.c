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

	while (a <= '9') /*run boucle a from a=0 to a=9*/
	{
		b = a + 1; /*b always different from a and alway one more than a*/
		while (b <= '9') /*run boucle b in a till b=9*/
		{
			putchar(a); /*print a*/
			putchar(b); /*print b after a so ab*/
			if (a == '8' && b == '9')
			{
				putchar('\n'); /*so if 89 print new line*/
					}
			else /* if(false) a!=8 & b!=9 so if ab!=89*/
			{
				putchar(44); /*code ASCII to print ',' coma*/
				putchar(32); /*code ASCII to print 'space'*/
			}
			b++; /*end boucle b in a and increment b*/
		}
		a++; /*end boucle a end increment a*/
	}
	return (0);
}
