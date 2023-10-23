#include "lists.h"
/**
* insert_nodeint_at_index - to inset a node at an index
* @head: the first node
* @index: the place to add a new node
* @n: the integer for the linked list
* Return: a pointer to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *h = *head;
	listint_t *added;
	listint_t *temp;
	unsigned int a = 0;

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
	while (h->next != NULL)
	{
		if (a == idx)
		{
			temp = h->next;
			h = added
			added->next = h->next;
		}
		h = h->next;
		a++;
