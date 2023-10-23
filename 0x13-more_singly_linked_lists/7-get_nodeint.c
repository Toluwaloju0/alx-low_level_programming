#include "lists.h"
/**
* get_nodeint_at_index - to get a given node
* @head: the first node of the list
* @index: the number of the given node
* Return: a pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	listint_t *h = head;
	unsigned int a = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (h->next != NULL)
	{
		if (a == index)
		{
			return (h);
		}
		h = h->next;
		a++;
	}
	if (a == index)
	{
		return (h);
	}
	return (NULL);
}
