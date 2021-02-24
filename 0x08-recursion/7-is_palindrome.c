#include "holberton.h"
/**
 *_strlen_recursion - return the lenght of a string
 *@s: string
 *Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *check_pal - check if string is palindrome
 *@left: string
 *@right: string
 *Return: if left != right returns 0 if left=right return 1,
 *else returns check_pal(left+1, right-1)
 */
int check_pal(char *left, char *right)
{
	if (*left != *right)
	{
		return (0);
	}
	else if (left >= right)
	{
		return (1);
	}
	return (check_pal(left + 1, right - 1));
}
/**
 *is_palindrome - check if is palindrome
 *@s: string
 *Return: 1 if pal 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	char *left = s;
	char *right = s + (i - 1);

	if (i == 0)
	{
		return (1);
	}
	return (check_pal(left, right));
}
