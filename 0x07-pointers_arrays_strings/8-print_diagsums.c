#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diag o a square matrix of int
 *@a: array
 *@size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diag, anti_diag;

	diag = anti_diag = 0;

	for (i = 0 ; i < (size * size); i = i + (size + 1))
	{
		diag = diag + a[i];
	}
	for (j = size - 1 ; j < (size * size) - (size - 1) ; j = j + (size - 1))
	{
		anti_diag = anti_diag + a[j];
	}
	printf("%d, %d\n", diag, anti_diag);
}
