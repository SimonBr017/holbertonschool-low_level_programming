#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - unction that executes a function given as a
 * parameter on each element of an array
 *@array: int array
 *@size: int
 *@action:  pointer to the function you need to use
 *Return: nothing void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
