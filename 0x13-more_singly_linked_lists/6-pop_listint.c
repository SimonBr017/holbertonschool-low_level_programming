#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to first node
 *Return: returns the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);
	tmp = *head; /*store head in tmp */
	i = tmp->n;
	*head = tmp->next; /* change the 1rst node */
	free(tmp);
	return (i);
}
