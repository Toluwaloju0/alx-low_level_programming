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
	dlistint_t *new, *travel = *h;
	unsigned int a = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n
	while (travel->next != NULL)
	{
		if (a == idx)
		{
			return (new);
		}
		travel = travel->next;
		a++;
	}
	free(new);
	if (a == idx)
	{
		new = add_dnodeint_end(&h, n);
		return (new);
	}
	return (NULL);
}
