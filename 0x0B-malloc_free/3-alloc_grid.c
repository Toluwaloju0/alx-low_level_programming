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
	int **i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * height * width);
	if (i != NULL)
	{
		for (k = 0; k < height; k++)
		{
			for (j = 0; j < width; j++)
			{
				i[k][j] = 0;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (i);
}
