#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - To search for a value using interpolatiopn method
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: The index o the value else -1
 */

int interpolation_search(int *array, size_t size, int value)

{
	size_t pos, l, h;

	if (array == NULL)
	{
		return (-1);
	}

	l = 0;
	h = size - 1;
	pos = 1;
	while (array[l] != array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] > value)
		{
			h = pos;
		}
		else
		{
			l = pos + 1;
		}
	}
	return (-1);
}
