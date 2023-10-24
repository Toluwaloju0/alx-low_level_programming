#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - to inset a node at an index
* @head: the first node
* @idx: the place to add a new node
* @n: the integer for the linked list
* Return: a pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *h = *head;
	listint_t *added;
	unsigned int a = 1;

	if (head == NULL)
	{
		return (NULL);
	}
	added = malloc(sizeof(listint_t));
	if (added == NULL)
	{
		return (NULL);
	}
	added->n = n;
	added->next = NULL;
	if (idx == 0)
	{
		added->next = *head;
		*head = added;
		return (added);
	}
	while (h->next != NULL)
	{
		if (a == idx)
		{
			added->next = h->next;
			h->next = added;
			return (added);
		}
		h = h->next;
		a++;
	}
	if (a == idx)
	{
		added->next = h->next;
		h->next = added;
		return (added);
	}
	return (NULL);
}
