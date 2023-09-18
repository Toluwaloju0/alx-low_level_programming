#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - to duplicate a string
* @str: the string tto be duplicated
* Return: the duplicated character
*/
char *_strdup(char *str)
{
	int i = 0;
	int j = strlen(str);
	char *l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = malloc(sizeof(char) * j);
	if (l == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		l[i] = str[i];
		i++;
	}
	return (l);
}
