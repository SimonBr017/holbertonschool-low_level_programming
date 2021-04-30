#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: pointer to the first node
 *@idx: position where to ad the node
 *@n: int to insert into the list
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *tmp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
