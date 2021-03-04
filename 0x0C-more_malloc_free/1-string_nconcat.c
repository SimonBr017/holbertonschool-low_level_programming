#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings
 *@s1: str
 *@s2: str
 *@n: int
 *Return: pointer contains s1 & first n bytes of s2, NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;
	char *dest;

	if (s1 != NULL)
		while (s1[s1len] != '\0')
			s1len++;
	else
		s1 = "";
	if (s2 != NULL)
		while (s2[s2len] != '\0')
			s2len++;
	else
		s2 = "";
	if (n >= s2len)
		n = s2len;
	else
		dest = malloc((s1len + n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		dest[i] = s1[i];
	for (i = 0; i < s2len && i < n; i++)
		dest[i + s1len] = s2[i];
	dest[s1len + s2len] = '\0';
	return (dest);
}
