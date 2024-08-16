#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - to search for a value using jump search
 * @array: the array to be searched for
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the first index of value
 */

int jump_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value)

{
	size_t a = 0, c, e, b, d;

	if (array == NULL)
	{
		return (-1);
	}

	b = sqrt(size);
	c = 0 + b;
	while (a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (c >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", a, c);
			for (e = a; e < size; e++)
			{
				printf("Value checked array[%ld] = [%d]\n", e, array[e]);
				if (array[e] == value)
				{
					return (e);
				}
			}
		}
		if (array[c] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",     a, c);
			for (d = a; d <= c; d++)
			{
				if (array[d] == value)
				{
					for (e = a; e <= d; e++)
					{
						printf("Value checked array[%ld] = [%d]\n", e, array[e]);
					}
					return (d);
				}
			}
		}

		a += b;
		c += b;
	}
	return (-1);
}
