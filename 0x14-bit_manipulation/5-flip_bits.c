#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipped to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count++;
		result &= (result - 1);
	}
	return (count);
}
