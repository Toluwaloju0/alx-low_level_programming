#include "lists.h"
#include <stdlib.h>
/**
* free_list - to free a space for a singly linked list
* @head: the first node
*/

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next_node;

	if (head == NULL)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		next_node = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next_node;
	}
	free(ptr->str);
	free(ptr);
	head = NULL;
}
