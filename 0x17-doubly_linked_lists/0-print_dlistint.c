#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - to print the integers in a doubly linked list
 *@h: the head of the linked list
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	if (h == NULL)
	{
		return (a);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	printf("%d\n", h->n);
	a++;
	return (a);
}
