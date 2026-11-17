#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid made by alloc_grid
 * @grid: the grid to free
 * @height: number of rows in the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0; /* row counter */

	if (grid == NULL) /* stops early if nothing to free */
		return; /* reading grid[i] when grid is NULL would crash */

	/**
	 * frees every row, one at a time
	 * Why height: function has no other way to know how many rows exist
	 * that's why the task passes it i
	 */

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	/**
	 * Why last: grid[i] lives inside it
	 * freeing grid first would leave you reading memory you no longer own
	 */

	free(grid); /* frees the list of row pointers last */
}
