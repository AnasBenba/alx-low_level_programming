#include "main.h"

/**
 * clear_bit - Clear a bit at a given index in an unsigned long int
 * @n: Pointer to the unsigned long int
 * @index: Index of the bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8 - 1;

	if (index > size || index < 0)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1ul << index);
		return (1);
	}
}
