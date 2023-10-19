#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - to print a list from a linked list
* @h: pointer to the lists
* Return: the number of lists printed
*/
size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
			h = h->next;
			a++;
			continue;
		}
		printf("%s\n", h->str);
		h = h->next;
		a++;
	}
	printf("[%u] ", h->len);
	if (h->str == NULL)
	{
		printf("(nil)\n");
		a++;
		return (a);
	}
	printf("%s\n", h->str);
	a++;
	return (a);
}
