#include "main.h"

/**
 * free_grid()- function that frees a 2 dimensional
 *	grid previously created by your alloc_grid function
 *
 * @grid: pointer to the 2d array
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	/*Free individual rows*/
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
