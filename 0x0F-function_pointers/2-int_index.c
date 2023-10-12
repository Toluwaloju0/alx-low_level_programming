#include "function_pointers.h"
#include <stddef.h>
/**
* int_index - to search for an interger using pointer cmp
* @array: the array of integers
* @size: the number of elements in the array
* @cmp: a pointer to a function to compare
* Return: 0 on success, -1 on failure
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
