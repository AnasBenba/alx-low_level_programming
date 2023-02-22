#include "main.h"
#include <stdio.h>

/**
* sum_of_multiples -> function that prints the sum of multiples
* @n: number to use
* Return: nothing
*/
int sum_of_multiples(int n)
{
	int sum = 0;
	int i = 0;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d", sum);
}
