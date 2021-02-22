#include "holberton.h"
#include "stddef.h"
/**
 * *_strchr - check in a char in a string
 *@s: string
 *@c: char
 *Return: NULL if c is not found returns s if c is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
