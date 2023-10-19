#include "lists.h"
/**
* list_len - to find the number of elements in a linked list
* @h: the travelling pointer
* Return: the number of linked list elements
*/

size_t list_len(const list_t *h)

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
