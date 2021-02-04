#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
	char chl, chu;

	for (chl = 'a' ; chl <= 'z' ; chl++)
	{
		putchar(chl);
	}
	for (chu = 'A' ; chu <= 'Z' ; chu++)
	{

		putchar(chu);
	}
	{
	putchar('\n');
	}
	return (0);
}
