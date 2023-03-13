#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> function that returns a pointer
 *               to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the newly allocated grid or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		s[h] = malloc(width * sizeof(int));
		if (s[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(s[h]);
			}
			free(s);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			s[h][w] = 0;
		}
	}
	return (s);
}
