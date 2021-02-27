#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *@argc: arg count
 *@argv: arg vecteur
 *Return: returns 0 (sucsess) or 1 if argc !=3
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
