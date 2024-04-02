#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - to add a node to the begginning if a list
 * @head: the first element of the list
 * @k: the key to be added
 * @v: the string to be added
 * Return: pointer to the first elemrnt of the list
 */

hash_node_t *add_node(hash_node_t *head, const char *k, const char *v);
hash_node_t *add_node(hash_node_t *head, const char *k, const char *v)
{
	hash_node_t *new;

	if (head)
	{
		if (strcmp(head->key, k) == 0)
		{
			free(head->value);
			head->value = strdup(v);
			if (head->value == NULL)
			{
				free(head->key);
				free(head);
				return (NULL);
			}
			return (head);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->key = strdup(k);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(k);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = head;
	head = new;
	return (head);

}

/**
 * hash_table_set - to set a key in a hash table
 * @ht: the hash table to add the string to
 * @key: the key to be used
 * @value: the value assocated with the key
 * Return: 1 on sucess, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
	unsigned long int index;
	hash_node_t *h;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *)key);

	index = index % ht->size;

	h = add_node(ht->array[index], key, value);
	if (h == NULL)
	{
		return (0);
	}
	ht->array[index] = h;
	return (1);
}
