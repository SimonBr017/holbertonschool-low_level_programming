#include "holberton.h"
/**
 *_isupper - check for uppercase letter
 *@c: letter
 *Return: returns 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65) /* 90 Z 65 A*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
