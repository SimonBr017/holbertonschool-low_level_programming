#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index index of a listint_t
 *@head: pointer to the first node
 *@index: node to delete
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);

	return (1);
}
