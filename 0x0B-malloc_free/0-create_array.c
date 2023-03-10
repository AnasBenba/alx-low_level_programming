#include "main.h"
#include "stdlib.h"

/**
 * create_array ->  function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to be created
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0
 * or if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		s[size] = c;
	}
	return (s);
}
