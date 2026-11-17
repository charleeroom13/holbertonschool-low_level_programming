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
	int **grid; /* a pointer to a list of pointers. Each pointer in the list points to one row of ints */
	int i = 0; /* row number */
	int j; /* column number (or cleanup counter) */

	if (width <= 0 || height <= 0) /* Why first: we shouldn't ask malloc for a nonsense size */
		return (NULL);

	/**
	 * Why sizeof(int *): each slot holds a pointer, not an int
	 * a pointer is 8 bytes on a 64-bit system, but an int is 4
	 * so using sizeof(int) here would be too small
	 */

	grid = malloc(height * sizeof(int *)); /* builds list of floors, one slot per row */

	if (grid == NULL) /* first malloc can fail too. Nothing is built yet, so nothing to clean up */
		return (NULL);

	while (i < height)
	{
		/**
		 * builds one row of width ints and hooks it onto slot i
		 * Why sizeof(int): this time each spot holds an int
		 */

		grid[i] = malloc(width * sizeof(int));

		/**
		 * if row i failed, frees rows 0 to i - 1 (the loop with j < i)
		 * then frees grid itself, then returns NULL
		 * Why: rows already built would otherwise be leaked, with no pointer left to free them
		 * free the rows first, then the list that points to them
		 * doing it other way round would lose the addresses
		 */

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

		/**
		 * sets every number in this row to 0
		 * malloc memory is garbage until you write to it, and task wants zeros
		 * Why j = 0 again: j was reused, so it must restart for every row
		 */

		j = 0;

		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++; /* moves on to next row */
	}

	return (grid); /* caller now owns whole structure. Task has no free function for it, so just exits */
}
