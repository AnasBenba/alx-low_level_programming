#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing values from min to max
 * @min: The minimum integer value to include in the array
 * @max: The maximum integer value to include in the array
 *
 * Return: A pointer to the newly created array of integers, or NULL if:
 *         - min is greater than max
 *         - malloc fails to allocate memory
 */
int *array_range(int min, int max)
{
	int len = max - min + 1;
	int *r;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	r = malloc(len * sizeof(int));
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		r[i] = i;
	}
	return (r);
}
