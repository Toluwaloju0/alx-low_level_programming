#include "main.h"
#include <stdlib.h>
/**
* array_range - to allocate the size of an array from max to min integers
* @min: the lowest value of the array
* @max: the highext value of the array
* Return: the pointer to the arrat space
*/
int *array_range(int min, int max)
{
	int j = 0;
	int *i;

	if (min > max)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * ((max - min) + 2));
	if (i == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		i[j] = min;
		j++;
		min++;
	}
	return (i);
}
