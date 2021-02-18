#include "holberton.h"
/**
 *reverse_array - reverse an array
 *@a: an array of integer
 *@n: integer
 *
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	for (i = 0, j = n - 1 ; i < j ; i++, --j)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
}
