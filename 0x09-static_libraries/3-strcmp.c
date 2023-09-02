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
	int a = strlen(s1) - 1;
	int b = strlen(s2) - 1;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] > s2[j] || a > b)
		{
			return (-13);
		}
		else if (s1[i] < s2[j] || a < b)
		{
			return (13);
		}
		i++;
		j++;
	}
	return (0);
}
