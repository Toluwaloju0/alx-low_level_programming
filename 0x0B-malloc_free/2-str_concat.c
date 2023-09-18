#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* str_concat - to concatenate two strings into a new pointer
* @s1: the first string
* @s2: the second string
* Return: the concatenated characters
*/
char *str_concat(char *s1, char *s2)
{
	int l = 0, m = 0;
	char *k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	k = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (k == NULL)
	{
		return (NULL);
	}
	while (s1[l] != '\0')
	{
		k[l] = s1[l];
		l++;
	}
	while (s2[m] != '\0')
	{
		k[l + m] = s2[m];
		m++;
	}
	return (k);
}
