#include <stdio.h>
/**
 * main - entry point
 *@argc: arg count
 *@argv: arg vecteur
 *Return: returns 0 (sucsess)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
