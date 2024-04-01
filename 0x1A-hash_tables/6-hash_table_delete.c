#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - to delete a hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)

{
	hash_node_t *h, *prev;
	unsigned long int a;;

	if (ht == NULL)
	{
		return;
	}

	for (a = 0; a <= ht->size; a++)
	{
		h = ht->array[a];
		while (h)
		{
			prev = h;
			h = h->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
		free(ht->array[a]);
	}
	free(ht->array);
	free(ht);
}
