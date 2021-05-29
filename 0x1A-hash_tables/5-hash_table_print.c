#include "hash_tables.h"
/**
 * hash_table_print - function that print hash table
 * @ht: hash table to print
 * Return: nothing(void)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hn;
	unsigned long int index, j = 0;
	char *space = "", *coma = ", ";

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		hn = ht->array[index];

		for (; hn != NULL; j++)
		{
			printf("%s", space);
			printf("'%s': '%s'", hn->key, hn->value);
			space = coma;
			hn = hn->next;
		}
	}
	printf("}\n");
}
