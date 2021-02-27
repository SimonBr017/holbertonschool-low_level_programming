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
	int i, j;
	int total = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		total = total + (atoi(argv[i]));
	}
	printf("%d\n", total);
	return (0);
}
