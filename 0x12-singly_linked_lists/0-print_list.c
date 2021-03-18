#include "lists.h"

/**
 *size_t print_list - function that prints all the elements of a list_t
 *@list_t: list to print
 *@h: pointer to the struct
 *Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 1;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	i++;
	return (i);
}
