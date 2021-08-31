#include "search_algos.h"

/**
 * binary_search - searches for a value in an array
 * @array: array to search
 * @size: nbr elem in the array
 * @value: value to search
 * Return: the first index where value is found, otherwise -1
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0;
	size_t end = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);

	while (end >= begin)
	{
		print_array(array, begin, end);
		mid = (begin + end) / 2;

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * print_array - print array
 * @array: array to print
 * @begin: satrt index of array
 * @end: end index of array
 * Return: nothing
 **/

void print_array(int *array, size_t begin, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = begin; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}
