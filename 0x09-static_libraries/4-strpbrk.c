#include "main.h"
#include <string.h>
/**
* _strpbrk - to search a string for any set of bytes
* @s: the string to be searched
* @accept: the byte to find in s
* Return: a pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *p;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*s == *accept)
			{
				p = &s[i - 1];
			}
			else
			{
				j++;
				continue;
			}
			j++;
		}
		i++;
	}
	return (p);
	if (*s != *accept)
	{
		return (NULL);
	}
}
