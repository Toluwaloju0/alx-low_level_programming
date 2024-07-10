#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - to search a array for a value using linear search system
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the value if present else -1
 */

int linear_search(int *array, size_t size, int value)

{
	int a;
	size_t b;

	if (array == NULL)
	{
		return (-1);
	}
	a = 0;
	b = 0;

	while (b < size)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
		a++;
		b++;
	}
	return (-1);
}
