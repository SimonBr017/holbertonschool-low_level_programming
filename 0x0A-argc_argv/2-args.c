#include <stdio.h>
/**
 * main - entry point
 *@argc: arg count
 *@argv: arg vecteur
 *Return: returns 0 (sucsess)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
