#include "function_pointers.h"

/**
* int_index - searches for an integer in an array
* @array: the array to search through
* @size: the size of the array
* @cmp: the function to use to compare values
*
* Return: the index of the first element for which cmp returns non-zero,
*         or -1 if no element matches or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
