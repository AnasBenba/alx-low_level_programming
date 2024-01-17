#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a
 * sorted array using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t l, r, mid;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size)
	{
		if (array[i] > value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	l = i / 2;
	if (i >= size)
		i = size - 1;
	r = i;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	while (l <= r)
	{
		print_array(array, l, r);
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
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
