#include "lists.h"

/**
 *sum_dlistint - to find the sum of integers in a doubly linked list
 * @head: the doubly linked list
 * Return: the sum of the integers
 */

int sum_dlistint(dlistint_t *head)

{
	dlistint_t *h = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (h->next != NULL)
	{
		sum = sum + h->n;
		h = h->next;
	}
	sum = sum + h->n;
	return (sum);
}
