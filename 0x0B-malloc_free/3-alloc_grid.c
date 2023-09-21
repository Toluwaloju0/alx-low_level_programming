#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - to allocate memory for a two-dimensional array of integers
* @width: the numbers of rows
* @height: the number of columns
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **i, j = 0, k = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * (height * width));
	if (i == NULL)
	{
		return (NULL);
	}
	while (k < width)
	{
		while (j < height)
		{
			i[k][j] = 0;
			j++;
		}
		k++;
	}
	return (i);
}
