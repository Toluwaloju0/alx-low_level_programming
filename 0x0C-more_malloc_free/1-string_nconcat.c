#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - to concatenate two strings
* @s1: the first string
* @s2: the second string
* @n: number of bytes of s2 to be copied
* Return: a pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	i = malloc(strlen(s1) + n);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		i[j] = s1[j];
	}
	for (k = 0; k < n; k++)
	{
		i[j + k] = s2[k];
	}
	return (i);
}
