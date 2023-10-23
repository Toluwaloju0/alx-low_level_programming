#include "lists.h"
#include <stdlib.h>
/**
* free_listint - to free a linked list
* @head: the first item on the list
*/

void free_listint(listint_t *head)

{
	listint_t *h = head;
	listint_t *freed;

	if (head == NULL)
	{
		return;
	}
	while (h->next != NULL)
	{
		freed = h->next;
		free(h);
		h = freed;
	}
	free(h);
}
