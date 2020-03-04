#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function to set free memory
 * @height: the length of the array
 * @grid: the grid itself
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0 || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
