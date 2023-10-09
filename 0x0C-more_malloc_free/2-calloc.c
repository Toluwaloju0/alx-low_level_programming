#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - to allocate memory using malloc
* @nmemb: the number of elements to be allocated
* @size: the size of each element
* Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(size * nmemb);
	if (i == NULL)
	{
		return (NULL);
	}
	memset(i, 0, nmemb);
	return (i);
}
