#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step = 0;

	if (array && size > 0)
	{
		while ((step < size) && (array[step] < value))
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			prev = step;
			step += (size_t)sqrt(size);
		}
		printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
		while ((prev < size) && prev <= step)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			if (array[prev] == value)
				return (prev);
			prev++;
		}
	}
	return (-1);
}
