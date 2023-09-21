#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_list - to print the datas of a singly linked list
* @h: a pointer to the list called list_h
* Return: the number of nodes
*/
size_t print_list(const list_t *h)

{
	size_t j = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			j++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		j++;
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	j++;
	return (j);
}
