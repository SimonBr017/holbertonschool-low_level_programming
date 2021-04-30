#include "lists.h"
/**
 *dlistint_len - return the number of elements in a int list
 *@h: pointer ti the struct
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
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
