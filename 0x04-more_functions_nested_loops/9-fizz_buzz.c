#include <stdio.h>
/**
 * main - fizbuz
 *
 *Return: 0
 */
int main(void)
{
	int nb;

	for (nb = 1 ; nb <= 100 ; nb++)
	{
		if (((nb % 5) == 0) && ((nb % 3) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((nb % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((nb % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", nb);
		}
	}
	printf("\n");
	return (0);
}
