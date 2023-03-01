#include "main.h"

/**
 * reverse_array -> function that reverses the content of an array of integers
 * @a: pointer to an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
