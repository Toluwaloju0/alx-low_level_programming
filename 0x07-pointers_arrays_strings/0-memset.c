#include "main.h"
#include <string.h>
/**
* *_memset - to fill a memory with a constant block
* @s: a pointer to a char string
* @b: a char to be filled with
* @n: the number of times b is to be filled
* Return: the edited character
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = strlen(s);

	while (s[i] <= s[n])
	{
		s[i] = b;
		i++;
	}
	return (s);
}
