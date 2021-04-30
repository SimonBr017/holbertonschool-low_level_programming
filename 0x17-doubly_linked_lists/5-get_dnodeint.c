#include "lists.h"
/**
 * get_dnodeint_at_index - returns a specific node of a listint_t linked list
 *@head: first node
 *@index: the node to return
 *Return: pointer to the specific node (index -> what a stupid name)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
