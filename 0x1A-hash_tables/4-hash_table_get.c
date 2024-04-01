#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - to get the value associated with a key
 * @ht: pointer to the hash table
 * @key: The key pointing to the table
 * Return: the value contained in the key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *h;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key);
	index = index % ht->size;

	h = ht->array[index];

	while (h != NULL)
	{
		if (strcmp(h->key, key) == 0)
		{
			return (h->value);
		}
		h = h->next;
	}
	return (NULL);
}
