#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - to concatenate n number of bytes in a string
* @s1: the first string
* @s2: the second string
* @n: the number of bytes to be concatenated
* Return: a charater containing the edited string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;
	char *k;

	k = malloc(sizeof(char) * (strlen(s1) + n));
	if (k == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		k[i] = s1[i];
		i++;
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	while (j <= n)
	{
		k[i + j] = s2[j];
		j++;
	}
	return (k);
}
