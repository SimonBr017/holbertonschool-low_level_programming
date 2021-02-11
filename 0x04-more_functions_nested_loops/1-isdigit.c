#include "holberton.h"

/**
 *_isdigit - check if c is a digit
 *@c: a char
 *Return: returns 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48) /*57= 9 48= 0)*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
