#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - to search an array in binary format
 * @array: the array to be searched
 * @size: number of elements in the array
 * @value: The value to be searched for
 * Return: The location of value in the array else -1
 */

int binary_search(int *array, size_t size, int value)

{
	size_t min = 0, max, tras, search;

	if (array == NULL)
	{
		return (-1);
	}
	max = size - 1;
	while (min <= max)
	{
		printf("Searching in array: ");
		for (tras = min; tras <= max; tras++)
		{
			if (tras == max)
			{
				printf("%d\n", array[tras]);
				break;
			}
			printf("%d ", array[tras]);
		}

		search = (min + max) / 2;
		if (array[search] == value)
		{
			return (search);
		}
		if (value > array[search])
		{
			min = search + 1;
		}
		else if (value < array[search])
		{
			max = search - 1;
		}
	}
	return (-1);
}
