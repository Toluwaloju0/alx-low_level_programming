#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - to allocate memory for a two dimensional array
* @width: the length of the array
* @height: the rows of the array
* Return: pointer to the two dimensional array
*/
int **alloc_grid(int width, int height)
{
	int **i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);
		if (i[j] == NULL)
		{
			return (NULL);
		}
	}
	return (i);
}
