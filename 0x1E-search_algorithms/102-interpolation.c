#include "search_algos.h"

/**
 * interpolation_search - Searches for a value
 * in a sorted array using interpolation search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (pos < size)
	{
		while (array[low] <= value && array[high] >= value && low <= high)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			if (array[pos] == value)
				return (pos);
			else if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;

			pos = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));
		}
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}
