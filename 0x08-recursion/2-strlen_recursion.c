#include "main.h"
/**
* _strlen_recursion - to print the length of a string
* @s: the string to be counted
* Return: the number of characters in a string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	return (i + _strlen_recursion(s));
}
