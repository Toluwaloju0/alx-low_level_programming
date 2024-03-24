#include "main.h"

/**
 * get_bit - To get the value of anumber at a particular index
 * @n: The number to be searched
 * @index: the index where the bit is to be gotten
 * Return: the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > 20)
	{
		return (-1);
	}
	n = n >> (index);
	if ((n % 2) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
