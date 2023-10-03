#include "main.h"
#include <stdlib.h>
/**
*free_grid - to free a twodimensional array
* @grid: the two dimensional array to be freed
* @height: the height of the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
