#include "main.h"
/**
* _strlen_recursion - to find the lrngth of a string using recursion
* @s: the string to be counted
* Return: the length of string s
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
