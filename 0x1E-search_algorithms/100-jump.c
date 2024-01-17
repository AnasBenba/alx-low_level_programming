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
	size_t left = 0;
	size_t right = 0;
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (array[left] < value && left < size)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		i = left;
		left += right;
		if (left > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, left);
			left = size;
		}
	}
	if (left < size)
		printf("Value found between indexes [%ld] and [%ld]\n", i, left);
	for (; i <= left && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
