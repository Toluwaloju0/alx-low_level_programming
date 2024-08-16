#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - To searcg for a value using recursive binary search
 * @array: the array to search for
 * @size: the size of the array
 * @value : the value to search for
 * Return: the index og the value searched for
 */

int advanced_binary(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value)

{
	size_t min = 0, mid, max, tras;
	int *new, a;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	max = size - 1;
	printf("Searching in array: ");
	for (tras = 0; tras <= max; tras++)
	{
		if (tras == max)
		{
			printf("%d\n", array[tras]);
			break;
		}
		printf("%d, ", array[tras]);
	}
	mid = (min + max) / 2;
	if (array[mid] == value && array[mid - 1] != value)
	{
		return (mid);
	}
	else if (array[mid] <  value)
	{
		new = &array[mid + 1];
		size = max - mid;
		a = advanced_binary(new, size, value);
		if (a == -1)
		{
			return (-1);
		}
		return (mid + 1 + a);
	}
	else if (array[mid] >= value)
	{
		size = mid + 1;
		a = advanced_binary(array, size, value);
		if (a == -1)
		{
			return (-1);
		}
		return (mid - a);
	}
	return (-1);
}
