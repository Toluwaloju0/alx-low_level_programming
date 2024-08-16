#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - to search for a value using exponential search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: The indec of the value else -1
 */

int exponential_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value)

{
	size_t expo = 1, min, max, tras;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}
	while (expo < size && array[expo] <= value)
	{
		min = expo;
		printf("Value checked array[%ld] = [%d]\n", expo, array[expo]);
		if (array[expo] == value)
		{
			return (expo);
		}
		expo *= 2;
	}
	max = expo;
	if (expo >= size)
	{
		max = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", min, max);
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
			printf("%d, ", array[tras]);
		}
		tras = (min + max) / 2;
		if (array[tras] == value)
		{
			return (tras);
		}
		if (value > array[tras])
		{
			min = tras + 1;
		}
		else if (value < array[tras])
		{
			max = tras - 1;
		}
	}
	return (-1);
}
