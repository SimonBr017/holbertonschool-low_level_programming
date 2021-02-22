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
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
