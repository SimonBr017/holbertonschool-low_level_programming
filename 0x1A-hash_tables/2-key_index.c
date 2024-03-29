#include "hash_tables.h"
/**
 * key_index - function that give the index of a key
 * @key: key string
 * @size: size of the array
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
