#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 *@h: pointer to the struct
 *Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
