#include "main.h"
#include <stdlib.h>

/**
 * free_grid -> frees a 2D array of integers
 * @grid: pointer to the array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
