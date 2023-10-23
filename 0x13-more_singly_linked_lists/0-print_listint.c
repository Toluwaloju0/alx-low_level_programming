#include "lists.h"
#include <stdio.h>
/**
* print_listint - to print the contents of a linked list
* @h: a pointer to the contents of a linked list
* Return: the number of elements printed
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	printf("%d\n", h->n);
	i++;
	return (i);
}
