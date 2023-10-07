#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - to allocate memory using malloc
* @b: the number of bytes to be allocated
* Return: a void pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
