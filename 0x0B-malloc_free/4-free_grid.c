#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees two dimension grid
 * @**grid: double pointer array
 * @height: Integer
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int d;

	if (grid != NULL)
	{
		for (d = 0; d < height; d++)
			free(grid[d]);
	}
	free(grid);
}
