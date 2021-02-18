#include "holberton.h"
/**
 * rot13 - replace specific char in a string by num
 *@str: string to modif
 *Return: corected string
 */
char *rot13(char *str)
{
	int i, j;
	char *letrs = "ABCDEFGHIJKLMabcdefghijklm";
	char *got13 = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; letrs[j] != '\0' ; j++)
		{
			if (str[i] == letrs[j])
			{
				str[i] = got13[j];
			}
			else if (str[i] == got13[j])
			{
				str[i] = letrs[j];
			}
		}
	}
	return (str);
}
