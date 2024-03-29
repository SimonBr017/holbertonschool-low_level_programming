#include "lists.h"
/**
 *sum_listint - eturns the sum of all the data (n) of a listint_t linked list.
 *@head: first node
 *Return: eturns the sum of all the data (n) or 0 if list empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
