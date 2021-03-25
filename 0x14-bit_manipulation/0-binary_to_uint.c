#include "holberton.h"
/**
 *unsigned int binary_to_uint - converti c'est clair nan ?
 *@b: pointeur ver char ? ??????
 *Return: convert num ou 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			conv = conv * 2;
		else if (b[i] == '1')
			conv = conv * 2 + 1;
		else
			return (0);
	}
	return (conv);
}
