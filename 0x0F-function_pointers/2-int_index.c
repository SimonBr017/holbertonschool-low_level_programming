#include "function_pointers.h"
/**
 *int_index - searches for int
 *@array: array
 *@size: size of the array
 *@cmp: function pointers
 *Return: return the index of the first element or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
