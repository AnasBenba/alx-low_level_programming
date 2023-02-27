#include "main.h"
#include <stdio.h>

/**
 * print_array -> function that prints n elements of an array of integers
 * @a: pointer to integer
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
