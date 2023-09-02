#include "main.h"
#include <string.h>
/**
* *leet - to change given letters to numbers
* @s: the given string
* Return: the edited string
*/
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'A' || s[i] == 'a')
		{
			s[i] = '4';
		}
		i++;
	}
	return (s);
}
