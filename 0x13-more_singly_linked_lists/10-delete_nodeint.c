#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - to delete a node at index
* @head: the first node
* @index: the number of the node
* Return: 1 on sucess, 0 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *h;
	listint_t *store;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		h = NULL;
		return (1);
	}
	while (h->next != NULL)
	{
		if (a == (index - 1))
		{
			store = h->next->next;
			free(h->next);
			h->next = NULL;
			h->next = store;
			return (1);
		}
		h = h->next;
		a++;
	}
	if (a == index - 1)
	{
		free(h);
		h = NULL;
		return (1);
	}
	return (-1);
}
