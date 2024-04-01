#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - to print a hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)

{
	hash_node_t *h;
	unsigned long int a;
	int b = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (a = 0; a <= ht->size; a++)
	{
		h = ht->array[a];
		if (h == NULL)
		{
			
			if (a == ht->size)
			{
				printf("}\n");
				return;
			}
			continue;
		}
		while (h)
		{
			if (b > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", h->key, h->value);
			b++;
			if (h->next == NULL)
			{
				break;
			}
			h = h->next;
		}
	}
}
