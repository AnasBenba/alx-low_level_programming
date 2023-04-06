#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the unsigned long int to set the bit in
 * @index: the index of the bit to set
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8 - 1;

	if (index > size || index < 0)
	{
		return (-1);
	}
	else
	{
		*n |= 1ul << index;
		return (1);
	}
}
