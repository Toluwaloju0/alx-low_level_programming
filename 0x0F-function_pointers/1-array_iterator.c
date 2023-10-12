#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - to execute a function
* @array: an array of integers
* @size: size of the array
* @action: a pointer to the code
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i = 0;

	if (action == NULL || size <= 0 || array == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
