#include "holberton.h"
#include <stddef.h>
/**
 * *_strstr - find the first occurence of a substring
 *@haystack: string
 *@needle: string
 *Return: NULL or the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack + i);
	}
	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
