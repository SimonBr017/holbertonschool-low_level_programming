#include <stdio.h>
/**
 * main - Entry point
 * with putchar to print a character
 * dysplay the alphabet
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
