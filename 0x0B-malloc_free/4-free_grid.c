#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees two dim array
 * @grid: two dim grid
 * @height: height dimension of grid
 *
 * return: nothing
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
