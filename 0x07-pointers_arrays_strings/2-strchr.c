#include "main.h"
#include <string.h>
/**
* *_strchr - to find a character in a string
* @s: the string to be searched
* @c: the character to be searches for
* Return: a pointer to the character
*/
char *_strchr(char *s, char C)
{
	int i =0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == C)
		{
			p = &s[i - 1];
		}
		else if (s[i] == '\0' && s[i] != C)
		{
			return (NULL);
		}
		i++;
	}
	return (p);
}
