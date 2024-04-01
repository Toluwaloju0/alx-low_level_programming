#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - To create a hash table
 * @size: the size of the array in the hash table
 * Return: A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t *h;

	if (size == 0)
	{
		return (NULL);
	}

	h = malloc(sizeof(hash_table_t) * 1);
	if (h == NULL)
	{
		return (NULL);
	}

	h->size = size;
	h->array = malloc(sizeof(hash_node_t) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}

	return (h);
}
