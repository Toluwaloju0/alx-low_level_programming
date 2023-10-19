#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node - to add a node to the begginning if a list
* @head: the first elemrnt of the list
* str: the string to be added
* Return: pointer to the first elemrnt of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);

}
