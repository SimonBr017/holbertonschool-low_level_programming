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
		return (&haystack[i]);
	while (haystack[i] != '\0')
	{
		j = 0;

		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (needle[j])
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
