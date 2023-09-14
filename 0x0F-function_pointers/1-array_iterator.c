#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - to execute a function given as parameter on an array
* @array: the array integer
* @size: the size of the array
* @action: a pointer to the function to be used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(size);
}
