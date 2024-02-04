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

hash_node_t *add_node(hash_node_t **head, const char *k, const char *v)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->key = strdup(k);
	new->value = strdup(v);
	new->next = *head;
	*head = new;
	return (new);

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
	unsigned long int b;
	hash_node_t **head;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	head = add_node(head, key, value);
	b =  key_index((const unsigned char *)key, size2);
	ht[b].size = b;
	ht[b].array = head;
	return (1);
}
