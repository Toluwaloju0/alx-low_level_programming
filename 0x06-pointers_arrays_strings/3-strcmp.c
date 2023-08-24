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
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[j])
		{
			return (-15);
		}
		else if (s1[i] > s2[j])
		{
			return (15);
		}
		else
		{
			return (0);
		}
		i++;
		j++;
	}
	return (0);
}
