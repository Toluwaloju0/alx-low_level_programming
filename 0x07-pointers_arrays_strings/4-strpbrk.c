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
	int i = 0, j, k = strlen(accept);
	char *p;

	while (s[i] != '\0')
	{
		for (j = 0; j < k; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}
	return (NULL);
}
