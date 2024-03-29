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
	size_t start = 0;
	size_t end = 0;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < size && i <= end; i++)
	{
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
