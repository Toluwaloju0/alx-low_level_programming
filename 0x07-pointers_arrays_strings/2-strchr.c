#include "main.h"
#include <string.h>
/**
* *_strchr - to find a character in a string
* @s: the string to be searched
* @C: the character to be searches for
* Return: a pointer to the character
*/
char *_strchr(char *s, char C)
{
	int i = 0, j = strlen(s);
	char *p;

	while (i < j)
	{
		if (s[i] == C)
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (NULL);
}
