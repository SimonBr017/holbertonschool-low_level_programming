#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: arg numbers
 * @argv: args
 * Return: returns 0 success
 */
int main(int argc, char *argv[])
{
	int loop, byte_num;
	char *Main = (char *)main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	byte_num = atoi(argv[1]);

	if (byte_num < 0)
	{
		puts("Error");
		exit(2);
	}

	for (loop = 0; loop < byte_num; loop++)
	{
		printf("%02hhx", *Main);

		if (loop < byte_num - 1)
		{
			printf(" ");
		}
		Main++;
	}
	printf("\n");

	return (0);
}
