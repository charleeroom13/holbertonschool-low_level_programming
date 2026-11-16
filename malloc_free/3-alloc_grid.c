#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers set to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the grid, or NULL on failure or bad size
 * Notes are pushed on GitHub later so Betty is happy!
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			j = 0;

			while (j < i)
			{
				free(grid[j]);
				j++;
			}

			free(grid);
			return (NULL);
		}

		j = 0;

		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++;
	}

	return (grid);
}
