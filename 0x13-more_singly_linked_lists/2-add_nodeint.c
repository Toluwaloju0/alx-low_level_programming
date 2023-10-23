#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - to add a node to the beginning of a linked list
* @head: the head of the linked list
* @n: the integer to be added
* Return: a pointer to the first item in the list
*/

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
