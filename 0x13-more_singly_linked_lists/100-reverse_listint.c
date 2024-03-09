#include "lists.h"

/**
 * reverse_listint - To reverse a listint pointer
 * @head: pointer to the head of the listint
 * Return: A pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *h;
	listint_t *prev = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	h = *head;
	while (*head != NULL)
	{
		h = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = h;
	}
	*head = prev;
	return (*head);
}
