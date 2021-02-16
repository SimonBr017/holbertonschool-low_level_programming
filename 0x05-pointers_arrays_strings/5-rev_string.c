#include "holberton.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return: the s string in reverse
 */
void rev_string(char *s)
{
	char tmp;
	int i, j, count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0, j = count - 1 ; i < j ; i++, --j)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
