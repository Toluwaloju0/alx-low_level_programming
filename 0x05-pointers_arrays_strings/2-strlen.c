#include "main.h"
/**
* _strlen - to print the length of a string
* @s: a character
* Return: integer
*/
int _strlen(char *s)
{
	int i = 0

	while (*s != '\0')
	{
		i++;
	}
	return (i);
}
