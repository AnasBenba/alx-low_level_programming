#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the unsigned long int to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at the given index, or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8 - 1;

	if (index > size)
	{
		return (-1);
	}
	if (n & (1ul << index))
		return (1);
	else
		return (0);
}
