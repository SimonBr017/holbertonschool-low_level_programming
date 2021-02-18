#include "holberton.h"
/**
 *_strncpy - copy the string pointed by src
 *@src: source
 *@dest: destination
 *@n: int
 *Return: the pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
