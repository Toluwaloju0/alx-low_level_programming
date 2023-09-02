#include "main.h"
#include <string.h>
/**
* _strspn - to check for the number of times char accept appears in str
* @s: the initial char to be checked
* @accept: the char containing the strings to be used
* Return: the number of times accept occurs in str
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;
	
	while (s[i] != '\0')
	{
		if (*accept == *s)
		{
			j = *s;
		}
		i++;
	}
	return (j);
}
