#include "main.h"
#include <string.h>


char *_strcpy(char *s)
{
	int c = strlen(s) - 1;
	char a[c];
	int b;

	if (c < 3)
	{
		return (NULL);
	}
	for (b = 1; b < c; b++)
	{
		*a = *s + 1;
		a++;
		s++;
	}
	a[b - 1] = '\0';
	return (a);
}
/**
 * is_palindrome - to check if a string is a palin drome
 * @s: The string to check
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)

{
	if (s == NULL)
	{
		return (0);
	}
	if (s[0] == s[strlen(s) - 1])
	{
		s = _strcpy(s);
		is_palindrome(s);
	}
	return (1);
}
