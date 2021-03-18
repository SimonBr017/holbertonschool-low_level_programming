#include "lists.h"

/**
 *list_len - that returns the number of elements in a linked list_t
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
