#include "holberton.h"
/**
 * leet - replace specific char in a string by num
 *@str: string to modif
 *Return: corected string
 */
char *leet(char *str)
{
	int i, j;
	char *leters = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; leters[j] != '\0' ; j++)
		{
			if (str[i] == leters[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
