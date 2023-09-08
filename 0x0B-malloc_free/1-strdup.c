#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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

	if (j < 0)
	{
		l = NULL;
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