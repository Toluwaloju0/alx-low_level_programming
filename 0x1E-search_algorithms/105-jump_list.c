#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - To search for a value in a linked list using jump search
 * @list: the list to search in
 * @size: the number of nodes in the list
 * @value: the value to search for
 * Return: the node in which value is present
 */

listint_t *jump_list(listint_t *list, size_t size, int value)

{
	listint_t *h, *tras;
	int jump, next, trav_num;

	printf("starting now");
/**	if (list == NULL)
	{
		return (NULL);
	}

	h = list;
	jump = sqrt(size);
	next = jump;
	trav_num = 0;
	while (next < size)
	{
		tras = h;
		while (trav_num < next && h->next != NULL)
		{
			h = h->next;
			trav_num++;
		}
		printf("Value checked at index [%ld] = [%d]", next, h->n);
		if (h->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]", trav_num, next);
			while (trav_num < next)
			{
				printf("Value checked at index [%ld] = [%d]", trav_num, tras->n);
				if (tras->n == value)
				{
					return (tras);
				}
				trav_num++;
				tras = tras->next;
			}
			break;
		}
		next += jump;
	}*/
	return (NULL);
}
