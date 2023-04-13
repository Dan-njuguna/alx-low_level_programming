#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - allocates two dimension
 * @width: integer
 * @height : integer
 * Return: return to 2D array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int d, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < height; d++)
	{
		grid[d] = (int *) malloc(sizeof(int) * width);
		if (grid[d] == NULL)
		{
			for (n = 0; n < d; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			grid[d][n] = 0;
		}
	}
	return (grid);
}
