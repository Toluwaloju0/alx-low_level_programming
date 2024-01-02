#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - to add a node to a doubly linked list
 * @head: pointer to the linked list
 * @n:  the integer to be added
 * Return: a pointer to the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
	return (new);
}
