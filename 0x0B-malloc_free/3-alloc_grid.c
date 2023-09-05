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
	int **i;
	int j, k;
	int m = height * width;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(sizeof(int) * m);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			i[j][k] = 0;
		}
	}
	return (i);
}
