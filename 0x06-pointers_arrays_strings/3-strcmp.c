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
	int i = strlen(s1);
	int j = strlen(s2);

	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
