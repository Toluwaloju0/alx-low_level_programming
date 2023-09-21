#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*add_node_end - to add a node to the end of a linked list
* @head: pointer to the first element in the list
* @str: the string to be added
* Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
