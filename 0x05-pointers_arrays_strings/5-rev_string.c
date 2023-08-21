#include "main.h"
#include <string.h>
/**
* length - to return the length of the string
* @s: a string to be reversed
* Return: int
*/
int length(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		i++;
	}
	return (i);
}
/**
* rev_string - to reverse a string
* @s: a character
*/
void rev_string(char *s)
{
	int start = 0;
	int end = i;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
