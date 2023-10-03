#include "main.h"
#include <stdlib.h>
/**
* create_array - to create an array using malloc
* @size: the size of the array
* @c: the character to initialize the array to
* Return: a pointer to the malloced array
*/

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int l;

	i = malloc(sizeof(char) * size);
	if (i == NULL || size == 0)
	{
		return (NULL);
	}
	for (l = 0; l <= size; l++)
	{
		i[l] = c;
	}
	return (i);
}
