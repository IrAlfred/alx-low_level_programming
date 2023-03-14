#include "main.h"

/**
 * free_grid - Frees the grid memory allocated
 * @grid: grid param
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(*(grid + i));
		}
		free(grid);
	}

}
