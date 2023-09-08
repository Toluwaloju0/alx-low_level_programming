#include "main.h"
#include <stdlib.h>
/**
* _calloc - to allocate memory for a string
* @nmemb: number of element of the data type
* @size: the size of memory to be allocated
* Return: a void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0;  j <= nmemb; j++)
	{
		i[j] = 0;
	}
	return (i);
}
