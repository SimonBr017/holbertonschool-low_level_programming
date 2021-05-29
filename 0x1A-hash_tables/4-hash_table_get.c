#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table to look into
 * @key: key we are looking for
 * Return: returns the value associated tothe key,
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hn = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hn = ht->array[index];

	while (hn)
	{
		if (strcmp(key, hn->key) == 0)
			return (hn->value);
		hn = hn->next;
	}
	return (NULL);
}
