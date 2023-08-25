#include "main.h"
#include <string.h>
/**
* *leet - to change given letters to numbers
* @str: the given string
* Return: the edited string
*/
char *leet(char *p)
{
	char *ptr = p;

	while (*ptr != '\0')
	{
		if (*ptr == 'a' || *ptr == 'A')
		{
			*ptr = '4';
		}
		else if (*ptr == 'e' || *ptr == 'E')
		{
			*ptr = '3';
		}
		else if (*ptr == 'o' || *ptr == 'O')
		{
			*ptr = '0';
		}
		else if (*ptr == 't' || *ptr == 'T')
		{
			*ptr = '7';
		}
		else if (*ptr == 'l' || *ptr == 'L')
		{
			*ptr = '1';
		}
		else
		{
			continue;
		}
		ptr++;
	}
	return (p);
}
