#include "holberton.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates memory
 *@ptr: pointer to mem previously alloc
 *@old_size: int
 *@new_size: int
 *Return: rturns pointer to new alloc mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *p1;
	unsigned int i;

	p1 = ptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && p1)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);


	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = p1[i];
	}
	free(ptr);
	return (p);
}
