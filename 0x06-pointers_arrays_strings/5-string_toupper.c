#include "holberton.h"
/**
 * string_toupper - change all lower case in a string by uppercase
 *@str: string
 *Return: upper case for each i with lowercase so *str corected
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
