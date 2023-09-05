#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* *create_array - to create an array of characters
* @size: the size of the memory to print
* @c: the character to be printed
* Return: a pointer to the character
*/
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int l = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(char) * size);
	if (i == NULL)
	{
		return (NULL);
	}
	while (l < size)
	{
		i[l] = c;
		l++;

	}
	return (i);
}
