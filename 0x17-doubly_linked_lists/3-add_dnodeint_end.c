#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - to add a node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: the integer to be added
 * Return: pointer to the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		new->prev = h;
		new->next = NULL;
		h->next = new;
	}
	return (new);
}
