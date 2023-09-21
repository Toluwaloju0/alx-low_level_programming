#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node - to add a node to the beginning of a linke list
* @head: a pointer to the first element of the node
* @str: the string to be added to the list
* Return: pointer to the new node
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
