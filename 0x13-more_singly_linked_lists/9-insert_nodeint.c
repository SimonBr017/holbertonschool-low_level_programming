#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the first node
 *@idx: position where to ad the node
 *@n: int to insert into the list
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
