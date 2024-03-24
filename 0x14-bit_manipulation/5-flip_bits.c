#include "main.h"

/**
 * flip_bits - Ti flip bits to get to a number
 * @n: the number to change
 * @m: the number to change into
 * Return: the number of bits fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
