#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *@src: source
 *@dest: destination
 *Return: return a pointeur to tthe resulting string
 */
char *_strcat(char *dest, char *src)
{
	int char_end_src;/*array nuber with value '\0' in src*/
	int i;
/*loocking for '\0' in dst*/
	{
		for (i = 0 ; dest[i] != '\0' ; i++)
		{
		}
		for (char_end_src = 0 ; src[char_end_src] != '\0' ; char_end_src++)
/*add add src to dest*/
		{
			dest[i + char_end_src] = src[char_end_src];
		}
	}
	return (dest);
}
