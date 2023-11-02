#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for negative or zero width/height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows */
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
