#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - to sreate a hash table of a particular size
 * @size: the size of the hash table to be created
 * Return: A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t *h;


	h = malloc(sizeof(hash_table_t));
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
