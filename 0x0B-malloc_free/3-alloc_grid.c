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
	int j = 0, i = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		ptr = NULL;
	else
	{
		ptr = malloc(height);
		for (i = 0; i < height; i++)
		{
			*(ptr + i) = malloc(width);
			if (*(ptr + i) == NULL)
				return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}