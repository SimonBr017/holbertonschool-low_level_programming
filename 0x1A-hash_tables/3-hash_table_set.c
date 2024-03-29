#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: key string
 * @value: key value
 * Return: 1 if succed 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node, *new_elem;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
		return (0);
	new_elem->key = strdup(key);
	new_elem->value = strdup(value);
	new_elem->next = NULL;


	if (ht->array[index] != NULL)
		new_elem->next = ht->array[index];
	ht->array[index] = new_elem;
	return (1);
}
