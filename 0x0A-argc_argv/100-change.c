#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: arg count
 *@argv: arg vecteur
 *Return: returns 0 (sucsess) or 1 (error)
 */
int main(int argc, char **argv)
{
	int cents;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
	{
		printf("0\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0 ; cents > 0 ; i++)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents == 1)
		cents = cents - 1;
	}
	printf("%d\n", i);
	return (0);
}
