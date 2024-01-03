#include "lists.h"

/**
 * delete_dnodeint_at_index - to delete a nide at a given location
 * @head: the doubly linked list
 * @index: the location of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *h = *head;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = h->next;
		free(h);
		return (1);
	}
	while (h->next != NULL)
	{
		if (a == index)
		{
			h->prev->next = h->next;
			h->next->prev = h->prev;
			free(h);
			return (1);
		}
		h = h->next;
		a++;
	}
	if (a == index)
	{
		h->prev->next = NULL;
		free(h);
		return (1);
	}
	return (-1);
}
