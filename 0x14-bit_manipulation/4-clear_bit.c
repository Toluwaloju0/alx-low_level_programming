#include "main.h"
#include <stddef.h>

/**
 * clear_bit - To change the bit at an index to 0
 * @n: the number where the bit is located
 * @index: the location to change to zero
 * Return: 1 on success, -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (n == NULL)
	{
		return (-1);
	}
	
