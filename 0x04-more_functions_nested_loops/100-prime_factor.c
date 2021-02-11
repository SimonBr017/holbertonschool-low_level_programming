#include <stdio.h>
/**
 * main - print the largest prime factors of a number
 *
 *Return: 0
 */
int main(void)
{
	unsigned long int num, i;

	num = 612852475143;

	for (i = 3 ; i < (num / 2); i = i + 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%lu\n", num);
	return (0);
}
