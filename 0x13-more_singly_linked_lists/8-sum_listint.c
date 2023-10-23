#include "lists.h"
/**
* sum_listint - to sum the integers in a linked list
* @head: the first node
* Return: the sum of all the integers
*/

int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *h = head;

	if (head == NULL)
	{
		return (a);
	}
	while (h->next != NULL)
	{
		a = a + h->n;
		h = h->next;
	}
	a = a + h->n;
	return (a);
}
