#include "holberton.h"
/**
 *_islower - check for lower case
 *
 *Return: return 1 if lower case - return 0 if not
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')/*with c between z 122(ascii) et a 97(ascii)*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
