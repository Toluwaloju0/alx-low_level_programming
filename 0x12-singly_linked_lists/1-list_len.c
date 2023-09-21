#include "lists.h"
#include <stdlib.h>

/**
* list_len - to return the numbers of elements in a list
* @h: a pointer to the head of list_t
* Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
		{
			j = j + 2;
		}
		else
		{
			h = h->next;
			continue;
		}
		h = h->next;
	}
	return (j);
}
