#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
* pop_listint - to delete and print the head node of a list
* @head: the head of the linked list
* Return: the number of lists deleted
*/

int pop_listint(listint_t **head)

{
	int a;
	listint_t *h;

	if (*head == NULL)
	{
		return (0);
	}
	h = *head;
	a = h->n;
	*head = (*head)->next;
	free(h);
	return (a);
}
