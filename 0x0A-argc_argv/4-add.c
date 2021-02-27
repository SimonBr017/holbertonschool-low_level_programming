#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: arg count
 *@argv: arg vecteur
 *
 *
 *Return: returns 0 (sucsess)
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (isdigit(*argv[i]))
		{
			total = total + (atoi(argv[i]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);
	return (0);
}
