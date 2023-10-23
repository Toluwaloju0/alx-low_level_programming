#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - to add a node at the end of the lesson
* @head: the head of the linked list
* @n: the integer to be added
* Return: a pointer to the end of the linked list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *end;
	listint_t *h = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = end;
	return (end);
}
