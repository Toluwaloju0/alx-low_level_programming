#include "main.h"
#include <string.h>
#include <ctype.h>
/**
* _strspn - to check for the number of times char accept appears in str
* @s: the initial char to be checked
* @accept: the char containing the strings to be used
* Return: the number of times accept occurs in str
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, l, k = strlen(accept);
	unsigned int j = 0;

	while (s[i] != ' ')
	{
		for (l = 0; l < k; l++)
		{
			if (accept[l] == s[i])
			{
				j = j + 1;
			}
		}
		i++;
	}
	return (j);
}
