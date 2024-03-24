#include "main.h"
#include <stddef.h>

/**
 * set_bit - to set a bit at an index to one
 * @n: the number to change
 * @index: The index to change to 1
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int a = 1 << index;

	if (n == NULL || index > 20)
	{
		return (-1);
	}
	*n = (*n | a);
	return (1);
}
