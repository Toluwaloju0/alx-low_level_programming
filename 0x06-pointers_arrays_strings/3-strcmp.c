#include "main.h"
#include <string.h>
/**
* _strcmp - to compare two strings
* @s1: first string
* @s2: second string
* Return: an integer
*/
int _strcmp(char *s1, char *s2)
{
	int a = strlen(s1);
	int b = strlen(s2);

	if (a > b)
	{
		return (15);
	}
	else if (a < b)
	{
		return (-15);
	}
	else
	{
		while (*s1 != '\0' && *s2 != '\0')
		{
			if (*s1 > *s2)
			{
				return (15);
			}
			else if (*s1 < *s2)
			{
				return (-15);
			}
			else
			{
				return (0);
			}
			s1++;
			s2++;
		}
		return (0);
	}
}
