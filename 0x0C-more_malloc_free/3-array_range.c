#include "main.h"
#include <stdlib.h>
/**
* array_range - to create an array of integers with values ranging from min to max
* @min: the lowest value of the array
* @max: the highest value of the array
* Return: a pointer to the allocated integer space
*/

int *array_range(int min, int max)
{
	int *i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * (max - min + 2));
	if (i == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}
