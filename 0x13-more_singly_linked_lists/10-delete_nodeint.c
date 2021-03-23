#include "lists.h"
/**
 *delete_nodeint_at_index -eletes the node at index index of a listint_t
 *@head: pointer to the first node
 *@index: node to delete
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		node = tmp;
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	node->next = tmp->next;
	free(tmp);

	return (1);
}
