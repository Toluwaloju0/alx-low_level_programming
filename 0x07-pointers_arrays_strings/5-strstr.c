#include "main.h"
#include <string.h>
#include <ctype.h>
/**
* _strstr - to locate a substring
* @haystack: the string to be searched
* @needle: the string to be found
* Return: a pointer to the brginning of haystack in needle
*/

char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i = 0, j, k = strlen(needle);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == ' ')
		{
			p = &haystack[i];
		}
		for (j = 0; j < k; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (p);
			}
		}
		i++;
	}
	return (NULL);
}
