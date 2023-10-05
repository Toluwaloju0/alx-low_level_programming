#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* strtow - to split a string into words
* @str: the string to be splited
* Return: a pointer to the words of the string
*/

char **strtow(char *str)
{
	char **i, *l;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	i = malloc(sizeof(char *) * strlen(str))
	{
		if (i == NULL)
		{
			return (NULL);
		}
