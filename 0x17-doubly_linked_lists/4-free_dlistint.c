#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - to free a doubly linked list
 * @head: the doubly linked list
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *h = head;

	if (head == NULL)
	{
		return;
	}
	while (h->next != NULL)
	{
		h = h->next;
		free(h->prev);
	}
	free(h);
}
