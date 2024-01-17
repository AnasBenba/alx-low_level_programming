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

	if (array == NULL)
	{
		return (-1);
	}
	while (array[right] < value && right < size)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left < size && left <= right)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
