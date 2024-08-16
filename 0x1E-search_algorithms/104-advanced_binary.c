#include <stdio.h>
#include "search_algos.h"

/**
 * print - To print an array
 * @size: The size of the array
 * @array: the array to be printed
 */

void print(size_t size, int *array);
void print(size_t size, int *array)

{
	size_t a;

	printf("Searching in array: ");
	for (a = 0; a < size; a++)
	{
		if (a == size - 1)
		{
			printf("%d\n", array[a]);
			break;
		}
		printf("%d, ", array[a]);
	}
}


/**
 * advanced_binary - To searcg for a value using recursive binary search
 * @array: the array to search for
 * @size: the size of the array
 * @value : the value to search for
 * Return: the index og the value searched for
 */

int advanced_binary(int *array, size_t size, int value)

{
	size_t mid;
	int *new, a;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	print(size, array);

	mid = (size - 1) / 2;

	if (array[mid] == value && array[mid - 1] != value)
	{
		return (size);
	}
	else if (array[mid] < value)
	{
		new = &array[mid + 1];
		size = size - mid - 1;
		a = advanced_binary(new, size, value);
		if (a == -1)
		{
			return (-1);
		}
		return (mid + a);
	}
	else if (array[mid] >= value)
	{
		size = mid + 1;
		a = advanced_binary(array, size, value);
		if (a == -1)
		{
			return (-1);
		}
		return (size - a);
	}
	return (-1);
}
