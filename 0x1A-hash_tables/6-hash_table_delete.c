#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table to delet
 * Return: nothing(void)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *hn = NULL;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		hn = ht->array[index];
		while (hn)
		{
			free(hn->key);
			free(hn->value);
			hn = hn->next;
			free(ht->array[index]);
			ht->array[index] = hn;
		}
	}
	free(ht->array);
	free(ht);
}
