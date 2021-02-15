#include "holberton.h"
/**
 * *_strcpy - copy the string pointed by src
 *@src: source to copy
 *@dest: char pointer
 *Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != 0 ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
