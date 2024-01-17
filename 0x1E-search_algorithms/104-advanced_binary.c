#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in an array using Binary search.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		print_array(array, i, r);
		mid = l + (r - l) / 2;

		if (array[mid] == value)
		{
			if (mid == l || array[mid - 1] != value)
				return (mid);
			r = mid;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
			i = l;
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
			i = l;
		}
	}

	return (-1);
}

/**
 * print_array - Prints a given range of elements from an array.
 * @array: A pointer to the first element of the array.
 * @i: Starting index to print.
 * @r: Ending index to print.
 *
 * Return: 0 (Always).
 */
int print_array(int *array, size_t i, size_t r)
{
	printf("Searching in array: ");
	while (i <= r)
	{
		if (i != r)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d\n", array[i]);
		}
		i++;
	}
	return (0);
}
