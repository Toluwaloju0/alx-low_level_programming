#include "lists.h"
/**
* listint_len - to print the number of lists in a linked list
* @h: a pointer to the linkked list
* Return: the number of lists in the linked list
*/

size_t listint_len(const listint_t *h)

{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	i++;
	return (i);
}
