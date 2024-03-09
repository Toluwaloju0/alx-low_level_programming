#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - to completely free a linked list
*  @head: the first element of the linked list
*/

void free_listint2(listint_t **head)

{
	listint_t *h;
	listint_t *sec;

	if (head == NULL)
	{
		return;
	}
	h = *head;
	while (h->next != NULL)
	{
		sec = h->next;
		free(h);
		h = sec;
	}
	free(h);
	*head = NULL;
}
