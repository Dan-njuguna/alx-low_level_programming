#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees two dimension grid
 * @grid: double pointer array to an integer
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int d;

	if (grid == NULL || height == 0)
		return;
	if (grid != NULL)
	{
		for (d = 0; d < height; d++)
			free(grid[d]);
	}
	free(grid);
}
