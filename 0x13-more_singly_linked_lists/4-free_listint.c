#include "lists.h"
/**
 * free_listint - free a listint_t list
 *@head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
