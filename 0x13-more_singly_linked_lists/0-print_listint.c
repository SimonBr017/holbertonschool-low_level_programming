#include "lists.h"
/**
 *print_listint - function that prints all te elements of int list
 *@h: pointer to the struct
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
