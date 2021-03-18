#include "lists.h"
/**
 *_strlen -fuction that return the length of a string
 *@str: constant string
 *Return: length of str
 */
int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 *add_node_end - add a new nod at the end of list_t
 *@head: head of list_t
 *@str: pointer to string to insert
 *Return: the adress of the new ellement or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
