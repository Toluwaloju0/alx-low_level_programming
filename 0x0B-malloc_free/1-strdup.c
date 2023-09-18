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
	char *l;

	if (str != NULL)
	{
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
	else
	{
		return (NULL);
	}
}
