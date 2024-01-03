#include "lists.h"

/**
 * get_dnodeint_at_index - to get the node at a giveb location
 * @head: the node to be searched
 * @index: the location of the node
 * Return: the  node or NULL if it is absent
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	dlistint_t *h = head;
	unsigned int a = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (h->next != NULL)
	{
		if (a == index)
		{
			return (h);
		}
		h = h->next;
		a++;
	}
	if (a == index)
	{
		return (h);
	}
	return (NULL);
}
