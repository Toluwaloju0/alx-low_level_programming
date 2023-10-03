#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - to allocate memory for a duplicate string
* @str: the string to be duplicated
* Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = malloc(sizeof(char) * strlen(str));
	if (l == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		l[i] = str[i];
		i++;
	}
	return (l);
}
