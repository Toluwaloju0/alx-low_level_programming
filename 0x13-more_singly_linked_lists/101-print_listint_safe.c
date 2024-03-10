#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - To print a linked list
 * @head: Pointer to the first node in the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t a;
	listint_t *h, *i;

	if (head == NULL)
	{
		return (0);
	}
	a = 0;
	h = (listint_t *)head;
	i = (listint_t *)head;
	while (h && i && i->next)
	{
		
		printf("%d\n", h->n);
		a++;
		h = h->next;
		i = i->next->next;
		if (h == i)
		{
			exit(98);
		}
	}
	return (a);
}
