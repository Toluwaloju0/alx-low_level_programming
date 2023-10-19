#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - to add a node to the end of a list
* @head: a pointer to the first linked list item
* @str: the string to be included in the list
* Return: a pointer to the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;


