#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 0x76543210;

	char *ptr = (char *) &n;

	if (*ptr == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
