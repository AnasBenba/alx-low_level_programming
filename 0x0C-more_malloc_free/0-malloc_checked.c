#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory block to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the function exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	if (b == INT_MAX)
	{
		exit(98);
	}
	else
	{
		r = malloc(b);
		if (r == NULL)
		{
			exit(98);
		}
		return (r);
	}
}
