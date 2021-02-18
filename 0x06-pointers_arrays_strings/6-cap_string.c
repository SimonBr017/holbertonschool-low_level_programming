#include "holberton.h"
/**
 * cap_string - change by upper case every first char
 *@str: string
 *Return: str corected
 */
char *cap_string(char *str)
{
	int i, j;
	char *c = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		for (j = 0 ; c[j] != '\0' ; j++)
		{
			if (str[i] == c[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
