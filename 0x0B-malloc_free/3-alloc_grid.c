#include "main.h"

/**
 * alloc_grid - Allocates the memory for the grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i--]);
			free(grid);
			return (NULL);
		}


		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
