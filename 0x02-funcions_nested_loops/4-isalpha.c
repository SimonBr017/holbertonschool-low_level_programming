#include "holberton.h"
/**
 *_isalpha - check for letter, lower case or upper
 *
 *Return: return 1 if letter - return 0 if not
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')/*with c between z 122(ascii) et a 97(ascii)*/
	{
		return (1);
	}
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
