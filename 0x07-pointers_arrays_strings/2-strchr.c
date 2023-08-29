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
	char a[50];

	while (s[i] != '\0')
	{
		if (s[i] == C)
		{
			s[i] = a[50];
			break;
		}
		i++;
	}
	return (a);
}
