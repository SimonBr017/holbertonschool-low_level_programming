#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@src: source
 *@dest: destination
 *Return: return a pointeur to tthe resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int char_end;/*array nuber with value '\0' in src*/
	int i;
/*loocking for '\0' in dst*/
	{
		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (char_end = 0 ; char_end < n && src[char_end] != '\0' ; char_end++)
/*add add src to dest*/
		{
			dest[i + char_end] = src[char_end];
		}
	}
	return (dest);
}
