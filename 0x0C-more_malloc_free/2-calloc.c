#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 *           Sets the memory to zero
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory
 *         If nmemb or size is 0, the function returns NULL
 *         If malloc fails, the function returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	r = malloc(nmemb * size);
	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		r[i] = 0;
	}
	return (r);
}
