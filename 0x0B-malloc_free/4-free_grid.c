#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free individual rows */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the array of row pointers */
	free(grid);
}
