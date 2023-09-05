#include "main.h"
#include <stdlib.h>
#include <string.h>
/**_strdup - to duplicate a string
* @str: the string tto be duplicated
* Return: the duplicated character
*/
char *_strdup(char *str)
{
	int i = strlen(str);
	char *l;

	if (*str == '\0')
	{
		return (NULL);
	}
	l = malloc(sizeof(char) * i);
	while (str[i] != '\0')
	{
		*l = *str;
		str++;
		l++;
		i++;
	}
	return (l);
}
