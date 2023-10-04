#include "main.h"

/**
  * alloc_grid()- pointer to a pointer that returns a 2d array of int
  *
  * @width: first integer parameter
  * @height: second integer parameter
  * Return: a 2d array or NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = malloc(height * sizeof(int *));

	/*If width or height is 0 or negative*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*Insufficient memory*/
	if (grid == NULL)
		return (NULL);

	/*Allocate memory for the columns*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid[i]);
			return (NULL);
		}

		/*Initialize element to 0*/
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
