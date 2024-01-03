#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - to insert a node at a given point
 * @h: the doubly linked list
 * @idx: the index where the node is to be inserted
 * @n: the integer to be added
 * Return: pointer to the added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new, *t = *h, *ch;
	unsigned int a = 0;

	if (h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	while (t->next != NULL)
	{
		if (a == idx)
		{
			ch = t->prev;
			ch->next = new;
			t->prev = new;
			new->prev =ch;
			new->next = t;
			return (new);
		}
		t = t->next;
		a++;
	}
	free(new);
	if (a == idx)
	{
		new = add_dnodeint_end(h, n);
	return (new);
	}
	return (NULL);
}
