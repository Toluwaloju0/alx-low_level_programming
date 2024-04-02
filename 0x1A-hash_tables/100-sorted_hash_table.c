#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * shash_table_create - to create a shash table
 * @size: the size of the hash table to be created
 * Return: Pointer to the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;

	if (size == 0)
	{
		return(NULL);
	}

	h = malloc(sizeof(shash_table_t));
	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	h->shead = NULL;
	h->stail = NULL;
	return (h);
}

/**
 * shash_table_set - To set a hash table
 * @ht: The hash table
 * @key: The key of the hash table
 * @value: the value to be stored in the hash table
 * Return: 1 on success, 0 on failure;
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)

{
	shash_node_t *h;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	index = key_index(key, ht->size);


	if (ht->shead == NULL)
	ht->array[index] = h;
