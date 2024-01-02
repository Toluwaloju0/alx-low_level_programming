#include "lists.h"

/**
 * dlistint_len - to find the number if elements in a doubly linked list
 * @h: pointer to the doubly linked list
 * Return: the number of elements in  the list
 */
size_t dlistint_len(const dlistint_t *h)

{
	size_t a = 0;

	if (h == NULL)
	{
		return (a);
	}
	while (h->next != NULL)
	{
		a++;
		h = h->next;
	}
	a++;
	return (a);
}
