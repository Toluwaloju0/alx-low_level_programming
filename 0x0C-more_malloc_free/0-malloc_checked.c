#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - to allocate memory using malloc
* @b: the size of bytes to be allocated
* Return: a pointer
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
