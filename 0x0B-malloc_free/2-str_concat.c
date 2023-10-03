#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - to concatenate two strings toghether
* @s1: the first string
* @s2: the second string
* Return: a pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (l == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		l[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		l[i + j] = s2[j];
		j++;
	}
	return (l);
}
