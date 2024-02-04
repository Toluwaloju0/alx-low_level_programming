#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - to sreate a hash table of a particular size
 * @size: the size of the hash table to be created
 * Return: A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t **h[size];

	size2 = size;
	h = malloc(sizeof(hash_table_t) * size);
	if (h == NULL)
	{
		return (NULL);
	}
	return (h);
}
